package com.nini.assignment2;

import java.io.*;
import java.net.*;
import java.util.Scanner;
import org.apache.zookeeper.*;
import org.apache.zookeeper.data.Stat;
import org.zeromq.*;

public class E {
    static int checker;

    public static void main(String[] args) throws KeeperException, InterruptedException {
        try {
            ZContext context = new ZContext();
            ZMQ.Socket socket = context.createSocket(SocketType.PULL);
            socket.bind("tcp://*:1005");

             ZooKeeper zk = new ZooKeeper("localhost:2181", 3000, new Watcher() {
                @Override
                public void process(WatchedEvent event) {
                    System.out.println("Event received: " + event);
                }
            });

            // create a node to store the ip address and port of node E
            zk.create("/E", "localhost:1005".getBytes(), ZooDefs.Ids.OPEN_ACL_UNSAFE, CreateMode.EPHEMERAL);

            // retrieve the nodes ip address and port from getChildren
            for (String node : zk.getChildren("/", false)) {
                System.out.println(new String(zk.getData("/" + node, false, null)));
            }

            FileOutputStream fos = new FileOutputStream("E.cpp", true);

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
            
            // while (true) {
            //     try {
            //         byte[] reply = socket.recv(0);
            //         fos.write(reply);
            //         fos.flush();
            //         if (reply[0] == -1 || reply[0] == 255) {
            //             break;
            //         }
            //     } catch (IOException e) {
            //         e.printStackTrace();
            //     }
            // }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}