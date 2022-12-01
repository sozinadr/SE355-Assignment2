
 package com.nini.assignment2;

import java.io.*;
import org.apache.zookeeper.*;
import org.zeromq.*;

public class B {
    static int checker;
    public static void main(String[] args) throws KeeperException, InterruptedException {
        try {
            ZContext context = new ZContext();
            ZMQ.Socket socket = context.createSocket(SocketType.PULL);
            socket.bind("tcp://*:1002");

            ZooKeeper zk = new ZooKeeper("localhost:2181", 3000, new Watcher() {
                @Override
                public void process(WatchedEvent event) {
                    System.out.println("Event received: " + event);
                }
            });

            // create a node to store the ip address and port of node B
            zk.create("/B", "localhost:1002".getBytes(), ZooDefs.Ids.OPEN_ACL_UNSAFE, CreateMode.EPHEMERAL);

            // store the ip address and port of the nodes in an array
            String[] nodes = new String[10];
            int numCounter = 0;
            for (String node : zk.getChildren("/", false)) {
                nodes[numCounter] = new String(zk.getData("/" + node, false, null));
                numCounter++;
            }

            // print the ip address and port of the nodes
            for (String node : nodes) {
                System.out.println("I'm an IP Address: " + node);
            }

            // notify other nodes with zookeeper if any node is down or up
            zk.exists("/B", new Watcher() {
                @Override
                public void process(WatchedEvent event) {
                    if (event.getType() == Event.EventType.NodeDeleted) {
                        System.out.println("Node B is down");
                    } else if (event.getType() == Event.EventType.NodeCreated) {
                        System.out.println("Node B is up");
                    }
                }
            });

            FileOutputStream fos = new FileOutputStream("B.cpp", true);

            // retrieve data from A with ZMQ with thread
            int counter = 0;
            while (!Thread.currentThread().isInterrupted()) {
                System.out.println("B is running");
                try {
                    byte[] reply = socket.recv(0);
                    fos.write(reply);
                    fos.flush();
                    if (reply[counter] == -1 || reply[counter] == 255) {
                        break;
                    }
                    counter++;
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}