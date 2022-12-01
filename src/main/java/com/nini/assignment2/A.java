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
import org.apache.zookeeper.data.Stat;
import org.zeromq.*;

public class A {
  static int checker;
  public static void main(String[] args) throws InterruptedException {

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