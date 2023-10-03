/*
============================================================================
Name : 20b.c
Author : Suraj Subedi
Description : Write two programs so that both can communicate by FIFO - Use one way communication
Date: 3rd Oct, 2023.
============================================================================
*/


#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <unistd.h>    
#include <stdio.h> 

//reading from fifo
int main()
{
    char buff[80];
    int fd=open("myfifo",O_RDONLY);
    read(fd,buff,sizeof(buff));
    printf("The text from the FIFO file: %s\n",buff);

}