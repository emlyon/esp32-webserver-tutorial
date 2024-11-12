## Overview of webserver.ino

This setup allows the ESP32 to serve web pages and respond to client requests over a WiFi network that it generates (Access Point)

To make this work, you need to upload your files to the ESP32 along with the `webserver.ino` file, thanks to LittleFS library.
Additional files will go to a folder named `data` in the same directory as the `webserver.ino` file.

To get started with the Web server library, check out [this tutorial](https://randomnerdtutorials.com/esp32-access-point-ap-web-server/).

And also [this tutorial](https://projecthub.arduino.cc/cetech11/implementing-web-server-on-esp32-5c24be)

To upload files, you need install the ESP32 LittleFS file system uploader plugin for the Arduino IDE.
Here is a [tutorial on how to install the plugin](https://randomnerdtutorials.com/arduino-ide-2-install-esp32-littlefs/#installing-MAC)

You will need to upload "data" files separately from the command palette :
<img width="632" alt="image" src="https://github.com/user-attachments/assets/12439419-b51c-4d4f-be8b-e0dfceda0740">

Warning : To upload files, the serial connection must be free. If you have started Serial monitor, kill it before uploading files.
