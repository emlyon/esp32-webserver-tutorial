## Overview of webserver.ino

The `webserver.ino` file contains the code necessary to set up a web server on the ESP32. Here is a brief overview of what is done in the file:

1. **Library Inclusions**: The necessary libraries for WiFi and web server functionality are included.
2. **WiFi Configuration**: The WiFi network credentials (SSID and password) are defined and the ESP32 is connected to the specified WiFi network.
3. **Web Server Setup**: An instance of the web server is created and configured to handle HTTP requests.
4. **Request Handlers**: Functions are defined to handle different types of HTTP requests (e.g., serving HTML pages, handling form submissions).
5. **Server Start**: The web server is started and begins listening for incoming HTTP requests.
6. **Loop Function**: The main loop function keeps the server running and handles any background tasks.

This setup allows the ESP32 to serve web pages and respond to client requests over a WiFi network.

To make this work, you need to upload your files to the ESP32 along with the `webserver.ino` file.
Additional files will go to a folder named `data` in the same directory as the `webserver.ino` file.

To upload files, you need install the ESP32 LittleFS file system uploader plugin for the Arduino IDE.
Here is a [tutorial on how to install the plugin](https://randomnerdtutorials.com/arduino-ide-2-install-esp32-littlefs/#installing-MAC)

To get started with the Web server library, check out [this tutorial](https://randomnerdtutorials.com/esp32-access-point-ap-web-server/).

And also [this tutorial](https://projecthub.arduino.cc/cetech11/implementing-web-server-on-esp32-5c24be)