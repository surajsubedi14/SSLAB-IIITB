/*
============================================================================
Name : 24.c
Author : Suraj Subedi
Description : Write a program to create a message queue and print the key and message queue id.
Date: 5th Oct, 2023.
============================================================================
*/
#include <unistd.h>    
#include <sys/types.h> 
#include <sys/stat.h>  
#include <stdio.h>     
#include <errno.h>  
#include <sys/ipc.h>   
int main()
{
    key_t queueKey;
    int queueIdentifier;

    queueKey=ftok(".",'a');
    queueIdentifier = msgget(queueKey, IPC_CREAT | IPC_EXCL | 0700);


    printf("Key: %d\n", queueKey);
    printf("Message Queue Identifier: %d\n", queueIdentifier);

}