#include "simpleTcpDebug.hpp"
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

void sendMessageToPort(int port, std::string message) {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        std::cerr << "Could not create socket" << std::endl;
        return;
    }

    sockaddr_in server;
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons(port);

    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        std::cerr << "Connect failed. Error" << std::endl;
        return;
    }

    if (send(sock, message.c_str(), message.size(), 0) < 0) {
        std::cerr << "Send failed" << std::endl;
        return;
    }

    close(sock);
}