//
// Created by 石川篤 on 24/07/01.
//

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int sockfd, newsockfd;
    socklen_t clilen;
    char buffer[256];
    struct sockaddr_in serv_addr, cli_addr;
    int n;
    /* create socket */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        {
            perror("ERROR opening socket");
            exit(1);
        }
    /* initialize socket structure */
    bzero((char *)&serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(5001);
    /* bind the host address */
    if (bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
        {
            perror("ERROR on binding");
            exit(1);
        }
    /* start listening for the clients */
    listen(sockfd, 5);
    clilen = sizeof(cli_addr);
    /* accept actual connection from the client */
    newsockfd = accept(sockfd, (struct sockaddr *)&cli_addr, &clilen);
    if (newsockfd < 0)
        {
            perror("ERROR on accept");
            exit(1);
        }
    /* If connection is established then start communicating */
    bzero(buffer, 256);
    n = read(newsockfd, buffer, 255);
    if (n < 0)
        {
            perror("ERROR reading from socket");
            exit(1);
        }
    /* Write a response to the client */
    n = write(newsockfd, "I got your message", 18);
    if (n < 0)
        {
            perror("ERROR writing to socket");
            exit(1);
        }

    /* clean up the new socket */
    close(newsockfd);
    close(sockfd);
    return 0;
}