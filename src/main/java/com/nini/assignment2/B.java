
 package com.nini.assignment2;

import java.io.*;
import java.net.*;
import java.util.Scanner;
import org.apache.zookeeper.*;
import org.apache.zookeeper.data.Stat;
import org.zeromq.*;

public class B {
    static int checker;
    public static void main(String[] args) {
        try {
            ZContext context = new ZContext();
            ZMQ.Socket socket = context.createSocket(SocketType.PULL);
            socket.bind("tcp://*:1002");
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