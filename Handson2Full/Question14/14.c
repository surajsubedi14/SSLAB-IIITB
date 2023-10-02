/*
============================================================================
Name : 14.c
Author : Suraj Subedi
Description : Write a simple program to create a pipe, write to the pipe, read from pipe and display on the monitor.
Date: 2nd Oct, 2023.
============================================================================
*/


#include <unistd.h> 
#include <stdio.h>

void main()
{
    int i,j,fd[2];
    char buf[80];

    i=pipe(fd);
    printf("i= %d\n",i);

    j=write(fd[1],"Hello\n",7);
    read(fd[0],buf,j);

    printf("From the pipe: %s\n",buf);
}