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
import org.apache.zookeeper.Watcher.Event.KeeperState;
import org.apache.zookeeper.ZooDefs.Ids;
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

class MyWatcher implements Watcher {

  private static final String HOST = "localhost:2181";
  private static final int SESSION_TIMEOUT = 2000;
  private static final String NODE_UP_PATH = "/node_up";
  private static final String NODE_DOWN_PATH = "/node_down";

  private ZooKeeper zk;

  public MyWatcher() {
    try {
      zk = new ZooKeeper(HOST, SESSION_TIMEOUT, this);
    } catch (Exception e) {
      e.printStackTrace();
    }
  }

  public void process(WatchedEvent event) {
    if (event.getState() == KeeperState.SyncConnected) {
      if (event.getType() == Event.EventType.NodeCreated) {
        try {
          zk.create(NODE_UP_PATH, new byte[0], Ids.OPEN_ACL_UNSAFE, CreateMode.PERSISTENT);
        } catch (Exception e) {
          e.printStackTrace();
        }
      } else if (event.getType() == Event.EventType.NodeDeleted) {
        try {
          zk.create(NODE_DOWN_PATH, new byte[0], Ids.OPEN_ACL_UNSAFE, CreateMode.PERSISTENT);
        } catch (Exception e) {
          e.printStackTrace();
        }
      }
    }
  }
}