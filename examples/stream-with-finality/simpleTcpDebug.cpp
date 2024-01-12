#include "simpleTcpDebug.hpp"
#ifdef _WIN32
#include <winsock2.h>
#include <Ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
#else
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#endif

void sendMessageToPort(int port, std::string message) {
    int sock = socket(AF_INET, SOCK_DGRAM, 0);
    if (sock == -1) {
        std::cerr << "Could not create socket" << std::endl;
        return;
    }

    sockaddr_in server;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    // Since UDP is connectionless, we do not need to connect to the server
    // Removed the connect() call

    message = message + '\n'; // Prepend "hello " to the message
    if (sendto(sock, message.c_str(), message.size(), 0, (struct sockaddr *)&server, sizeof(server)) < 0) {
        std::cerr << "Send failed" << std::endl;
        return;
    }

    // In UDP, there is no need to close the socket after each send
    // You can close it when you want to stop the UDP service or when the program ends
    // Removed the close() call
}
