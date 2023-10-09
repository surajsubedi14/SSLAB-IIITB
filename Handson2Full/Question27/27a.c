/*
============================================================================
Name : 27a.c
Author : Suraj Subedi
Description : Write a program to receive messages from the message queue with `0` as a flag
Date: 8th Oct, 2023.
============================================================================
*/

#include <sys/types.h> 
#include <sys/ipc.h>   
#include <sys/msg.h>   
#include <stdio.h>     
#include <unistd.h>    
#include <errno.h>   

void main()
{
    key_t queueKey;        
    int queueIdentifier;   
    int messageSize; 

    struct msgbuf
    {
        long mtype;     
        int someNumber; 
    } data;

    queueKey = ftok(".", 1);

    if (queueKey == -1)
    {
        perror("Error while computing key!");
        _exit(0);
    }

    queueIdentifier = msgget(queueKey, IPC_CREAT | 0700);

    if (queueIdentifier == -1)
    {
        perror("Error while creating message queue!");
        _exit(0);
    }

    data.mtype = 1;
    data.someNumber = 20;

    messageSize = msgrcv(queueIdentifier, &data, sizeof(data), data.mtype, 0);

    if (messageSize == -1)
    {
        perror("Error while sending message via Message Queue!");
        _exit(0);
    }

   printf("Received number: %d\n", data.someNumber);
}
