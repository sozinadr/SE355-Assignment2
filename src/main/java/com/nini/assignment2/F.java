
package com.nini.assignment2;

import java.io.*;
import org.apache.zookeeper.*;
import org.zeromq.*;

public class F {
    static int checker;

    public static void main(String[] args) throws KeeperException, InterruptedException {
        try {
            ZContext context = new ZContext();
            ZMQ.Socket socket = context.createSocket(SocketType.PULL);
            socket.bind("tcp://*:1006");

            ZooKeeper zk = new ZooKeeper("localhost:2181", 3000, new Watcher() {
                @Override
                public void process(WatchedEvent event) {
                    System.out.println("Event received: " + event);
                }
            });

            // create a node to store the ip address and port of node F
            zk.create("/F", "localhost:1006".getBytes(), ZooDefs.Ids.OPEN_ACL_UNSAFE, CreateMode.EPHEMERAL);

            MyWatcher watcher = new MyWatcher();
            try {
                zk.exists("/B", watcher);
                zk.exists("/C", watcher);
                zk.exists("/D", watcher);
                zk.exists("/E", watcher);
                zk.exists("/F", watcher);
            } catch (KeeperException e) {
                e.printStackTrace();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

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


            FileOutputStream fos = new FileOutputStream("F.cpp", true);

            // retrieve data from A with ZMQ with thread
            int counter = 0;
            while (!Thread.currentThread().isInterrupted()) {
                System.out.println("F is running");
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