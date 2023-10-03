/*
============================================================================
Name : 17a.c
Author : Suraj Subedi
Description : Write a program to execute `ls -l | wc`. Use `fcntl`
Date: 3rd Oct, 2023.
============================================================================
*/

#include <unistd.h>    
#include <sys/types.h> 
#include <stdio.h> 
#include <fcntl.h> 

int main()
{
    int fd[2];
    pipe(fd);

    if(!fork())
    {
        close(1);
        close (fd[0]);
        fcntl(fd[1],F_DUPFD,0);
        execl("ls","ls","-1",(char*)NULL);
    }
    else{
        close(0);
        close(fd[1]);
        fcntl(fd[0],F_DUPFD,0);
        execlp("wc","wc",(char*)NULL);
    }
}
