/*
 * *****************************************************************************************
 *                         Distributed Computing - SE355  Dr Yad                           *
 *                         Asaad Falah Rasul - Sozyar Karim Nadir                          *
 *                                                                                         *
 *                                  19-00015 - 18-00176                                    *
 *                                     Assignment Two                                      *
 * ***************************************************************************************** 
 */

package com.nini.assignment2;

import java.io.*;
import java.io.IOException;
import java.util.Scanner;
import org.apache.zookeeper.*;
import org.zeromq.*;

public class A {
  static int checker;
  public static void main(String[] args) throws InterruptedException, KeeperException {

    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the file name");
    String fileName = sc.nextLine();
    int nodeCounter = 0;

    /*
     * create a file input stream to read the file to be sent
     */
    try {

      ZContext context = new ZContext();
      ZMQ.Socket socket = context.createSocket(SocketType.REP);
      socket.bind("tcp://*:1001");

      ZooKeeper zk = new ZooKeeper("localhost:2181", 3000, new Watcher() {
        @Override
        public void process(WatchedEvent event) {
          System.out.println("Event received: " + event);
        }
      });

      // create a node to store the ip address and port of node A
      zk.create("/A", "localhost:1001".getBytes(), ZooDefs.Ids.OPEN_ACL_UNSAFE, CreateMode.EPHEMERAL);

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
      zk.exists("/A", new Watcher() {
        @Override
        public void process(WatchedEvent event) {
          if (event.getType() == Event.EventType.NodeDeleted) {
            System.out.println("Node A is down");
          } else if (event.getType() == Event.EventType.NodeCreated) {
            System.out.println("Node A is up");
          }
        }
      });

      FileInputStream fis = new FileInputStream(fileName);

      while (true) {
        try {
          int byteRead = fis.read();
          int sizeOfData = 1024;
          byte[] data = new byte[sizeOfData];
          int byteCount = 0;

          while (byteRead != -1) {
            if (byteCount == sizeOfData) {
              byteCount = 0;
              break;
            }
            data[byteCount++] = (byte) byteRead;
            byteRead = fis.read();
          }

          sendArray(data, nodeCounter++);

          if (byteRead == -1) {
            fis.close();
            socket.close();
            break;
          }

        } catch (IOException e) {
          e.printStackTrace();
        }
      }

    } catch (IOException e1) {
      e1.printStackTrace();
    }
  }

  //method to send each kb of data to the nodes
  public static void sendArray(byte[] data, int nodeCounter) throws InterruptedException {
    try (ZContext context = new ZContext()) {
      ZMQ.Socket socket = context.createSocket(SocketType.PUSH);
      // round robin to send data to nodes
      socket.connect("tcp://localhost:" + (1002 + (nodeCounter % 5)));
      System.out.println("Sending data");
      socket.send(data, 0);
      Thread.sleep(500);
    }

  }
}

  //method to retrieve data from the nodes
  // public static int retrieveData() {
  //   try {
  //     ZContext context = new ZContext();
  //     ZMQ.Socket socket = context.createSocket(SocketType.REQ);
  //     socket.connect("tcp://localhost:2002");
  //     socket.connect("tcp://localhost:2003");
  //     socket.connect("tcp://localhost:2004");
  //     socket.connect("tcp://localhost:2005");
  //     socket.connect("tcp://localhost:2006");
  //     socket.send("retrieve".getBytes(ZMQ.CHARSET), 0);
  //     byte[] reply = socket.recv(0);
  //     System.out.println("Received " + ": [" + new String(reply, ZMQ.CHARSET) + "]");
  //     socket.close();
  //     return 1;
  //   } catch (IOException e) {
  //     e.printStackTrace();
  //     return -1;
  //   }
  // }