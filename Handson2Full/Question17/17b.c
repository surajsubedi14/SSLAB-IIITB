/*
============================================================================
Name : 17a.c
Author : Suraj Subedi
Description : Write a program to execute `ls -l | wc`. Use `dup2`
Date: 3rd Oct, 2023.
============================================================================
*/

#include <unistd.h>    
#include <sys/types.h> 
#include <stdio.h> 

int main()
{
    int fd[2];
    pipe(fd);

    if(!fork())
    {
        close(1);
        close (fd[0]);
        dup2(fd[1],1);
        execl("ls","ls","-1",(char*)NULL);
    }
    else{
        close(0);
        close(fd[1]);
        dup2(fd[0],0);
        execlp("wc","wc",(char*)NULL);
    }
}
