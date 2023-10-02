/*
============================================================================
Name : 15.c
Author : Suraj Subedi
Description : Write a simple program to send some data from parent to the child process.
Date: 2nd Oct, 2023.
============================================================================
*/



#include <unistd.h> 
#include <stdio.h>

void main()
{
    char bff[80];
    int fd[2];
    pipe(fd);
    if(fork())
    {
        close(fd[0]);
        printf("Enter the messege to the child: ");
        scanf("%[^\n]",bff);
        write(fd[1],bff,sizeof(bff));


    }
    else{
        close(fd[1]);
        read(fd[0],bff,sizeof(bff));
        printf("Messege from parent: %s\n",bff);
    }

}