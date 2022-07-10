// #include <stdio.h>
// #include <sys/socket.h>
// #include <unistd.h>
// #include <netinet/in.h>
// #include <string.h>

// #define PORT 8080
// int main(int argc, char const *argv[])
// {
//   // runServer();
//       int server_fd, new_socket; long valread;
//   struct sockaddr_in address;
//   int addrlen = sizeof(address);

//   char *hello = "Hello from server";

//   // Creating socket file descriptor
//   if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
//     perror("In socket");
//     exit(EXIT_FAILURE);
//   }

//   address.sin_family = AF_INET;
//   address.sin_addr.s_addr = INADDR_ANY;
//   address.sin_port = htons(PORT);

//   memset (address.sin_zero, '\0', sizeof address.sin_zero);

//   if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
//     perror("In bind");
//     exit(EXIT_FAILURE);
//   }
//   if (listen(server_fd, 10) < 0) {
//     perror("In listen");
//     exit(EXIT_FAILURE);
//   }
//   while (1) {
//     printf("\n+++++++ Waiting for new connection +++++++\n\n");
//     if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&address)) < 0) {
//       perror("In accept");
//       exit(EXIT_FAILURE);
//     }

//     char buffer[30000] = {0};
//     valread = read( new_socket, buffer, 30000);
//     printf("%s\n", buffer);
//     write(new_socket, hello, strlen(hello));
//     printf("------------------Hello message sent------------------\n");
//     close(new_socket);
//   }
//   return 0;
// }

// void runServer(int argc, char const *argv[])
// {
//     int server_fd, new_socket; long valread;
//   struct sockaddr_in address;
//   int addrlen = sizeof(address);

//   char *hello = "Hello from server";

//   // Creating socket file descriptor
//   if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
//     perror("In socket");
//     exit(EXIT_FAILURE);
//   }

//   address.sin_family = AF_INET;
//   address.sin_addr.s_addr = INADDR_ANY;
//   address.sin_port = htons(PORT);

//   memset (address.sin_zero, '\0', sizeof address.sin_zero);

//   if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
//     perror("In bind");
//     exit(EXIT_FAILURE);
//   }
//   if (listen(server_fd, 10) < 0) {
//     perror("In listen");
//     exit(EXIT_FAILURE);
//   }
//   while (1) {
//     printf("\n+++++++ Waiting for new connection +++++++\n\n");
//     if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&address)) < 0) {
//       perror("In accept");
//       exit(EXIT_FAILURE);
//     }

//     char buffer[30000] = {0};
//     valread = read( new_socket, buffer, 30000);
//     printf("%s\n", buffer);
//     write(new_socket, hello, strlen(hello));
//     printf("------------------Hello message sent------------------\n");
//     close(new_socket);
//   }
// }

#include <netinet/in.h> //structure for storing address information
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h> //for socket APIs
#include <sys/types.h>

int main(int argc, char const* argv[])
{

    // create server socket similar to what was done in
    // client program
    int servSockD = socket(AF_INET, SOCK_STREAM, 0);

    // string store data to send to client
    char serMsg[255] = "Message from the server to the "
                       "client \'Hello Client\' ";

    // define server address
    struct sockaddr_in servAddr;

    servAddr.sin_family = AF_INET;
    servAddr.sin_port = htons(9001);
    servAddr.sin_addr.s_addr = INADDR_ANY;

    // bind socket to the specified IP and port
    bind(servSockD, (struct sockaddr*)&servAddr,
         sizeof(servAddr));

    // listen for connections
    listen(servSockD, 1);

    // integer to hold client socket.
    int clientSocket = accept(servSockD, NULL, NULL);

    // send's messages to client socket
    send(clientSocket, serMsg, sizeof(serMsg), 0);

    return 0;
}