/*
============================================================================
Name : 16.c
Author : Suraj Subedi
Description : Write a program to send and receive data from parent to child vice versa. Use two way communication.
Date: 2nd Oct, 2023.
============================================================================
*/
#include <unistd.h> 
#include <stdio.h>

void main()
{
    char bff[80],bff2[80];
    int fd[2];
    int fd2[2];
    pipe(fd);
    pipe(fd2);
    if(fork())
    {
        close(fd[0]);
        close(fd2[1]);
        printf("Enter the messege to the child: ");
        scanf("%[^\n]",bff);
        write(fd[1],bff,sizeof(bff));

        read(fd2[0],bff2,sizeof(bff2));

        printf("Messege from Child: %s\n",bff2);



    }
    else{
        close(fd[1]);
        close(fd2[0]);
        read(fd[0],bff,sizeof(bff));
        printf("Messege from parent: %s\n",bff);

       printf("Enter the messege to the Parent: ");
        scanf("%[^\n]",bff2);
        write(fd2[1],bff2,sizeof(bff2));
    }
    
}