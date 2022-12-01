package com.nini.assignment2;

import java.io.*;
import java.net.*;

public class F {
    static int checker;

    public static void main(String[] args) {
        /*
         * Retrieve data from A and also backup of the node before
         */
        try {
            ServerSocket ss = new ServerSocket(1006);
            FileOutputStream fos = new FileOutputStream("F.cpp", true);
            FileInputStream fis = new FileInputStream("F.cpp");
            while (true) {
                try {
                    Socket s = ss.accept();
                    retrieveData(s); // retrieve data from A
                    retrieveBackup(s); // retrieve backup from A

                    if (checker == -1) {
                        fos.close();
                        break;
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }

            }

            /*
             * 
             * SEND DATA BACK TO A
             * 
             */

             while (true) {
                try (ServerSocket ss2 = new ServerSocket(2006)) {
                    Socket s = ss2.accept();
                    System.out.println("check point 1");
                    int byteRead2 = fis.read();
                    int sizeOfData = 1024;
                    byte[] data = new byte[sizeOfData];
                    int byteCount = 0;

                    while (byteRead2 != -1) {
                        if (byteCount == sizeOfData) {
                            byteCount = 0;
                            break;
                        }
                        data[byteCount++] = (byte) byteRead2;
                        byteRead2 = fis.read();
                    }

                    sendArrayBackToA(data, s);

                    if (byteRead2 == -1) {
                        fis.close();
                        break;
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static void retrieveData(Socket s) {
        try {
            int byteRead = 0;
            FileOutputStream fos = new FileOutputStream("F.cpp", true);
            BufferedInputStream bis = new BufferedInputStream(s.getInputStream());
            for (int i = 0; i < 1024; i++) {
                byteRead = bis.read();
                if (byteRead == -1 || byteRead == 255) {
                    System.out.println("check point 3");
                    break;
                }
                fos.write(byteRead);
                fos.flush();
            }
            if (byteRead == -1 || byteRead == 255) {
                fos.close();
                checker = -1;
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static void retrieveBackup(Socket s) {
        try {
            FileOutputStream fos = new FileOutputStream("Ebackup.cpp", true);
            int byteRead = 0;
            DataInputStream dis = new DataInputStream(s.getInputStream());
            if (dis.readUTF().equals("backup")) {
                while (true) {
                    try {
                        BufferedInputStream bis = new BufferedInputStream(s.getInputStream());
                        for (int i = 0; i < 1024; i++) {
                            byteRead = bis.read();
                            if (byteRead == -1 || byteRead == 255) {
                                System.out.println("check point 2");
                                break;
                            }
                            fos.write(byteRead);
                            fos.flush();
                        }
                        if (byteRead == -1 || byteRead == 255) {
                            fos.close();
                            break;
                        }
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static void sendArrayBackToA(byte[] data, Socket s) {
        try {
        
            DataInputStream dis = new DataInputStream(s.getInputStream());
            BufferedOutputStream bos = new BufferedOutputStream(s.getOutputStream());
            if (dis.readUTF().equals("retrieve")) {
                for (byte arr : data) {
                    if (arr == 0) {
                        bos.write(-1);
                        bos.flush();
                        break;
                    }
    
                    bos.write(arr);
                    bos.flush();
                }
                bos.close();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}