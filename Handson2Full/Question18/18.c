/*
============================================================================
Name : 18.c
Author : Suraj Subedi
Description : Write a program to find out total number of directories on the `pwd`. Execute `ls -l | grep ^d | wc`. Use only `dup2`.
Date: 3rd Oct, 2023.
============================================================================
*/

#include <unistd.h>    
#include <sys/types.h> 
#include <stdio.h> 

int main()
{
    int fd1[2],fd2[2];
    pipe(fd1);
    pipe(fd2);

    if(!fork())
    {
        dup2(fd1[1],1);
        close(fd1[0]);
        close(fd2[0]);
        close(fd2[1]);
        execlp("ls","ls","-l",(char*)NULL);
    }
    else
    {
        if(!fork())
        {
            dup2(fd2[1],1);
            dup2(fd1[0],0);
            close(fd1[1]);
            close(fd2[0]);
            execlp("grep","grep","^d",(char*)NULL);//output of the last fd1 is givin as input and then we apply grep //


        }
        else{
            dup2(fd2[0],0);
            close(fd2[1]);
            close(fd1[0]);
            close(fd1[1]);
            execlp("wc","wc",(char*)NULL);
        }
    }
}