/*
============================================================================
Name : 20a.c
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


//writing to fifo

int main()
{
    char buff[80];
    //mkfifo("myfifo",0777);
    printf("Openning\n");
    int fd=open("myfifo",O_WRONLY);//open two terminal in one terminal run fifo and in the other run cat myfifo
    printf("open\n");
    printf("Enter the text:");
    scanf("%[^\n]",buff);
    write(fd,buff,sizeof(buff));
    close(fd);
}