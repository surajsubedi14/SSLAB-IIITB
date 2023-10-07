/*
============================================================================
Name : 21b.c
Author : Suraj Subedi
Description : Write two programs so that both can communicate by FIFO - Use two way communications.
Date: 4th Oct, 2023.
============================================================================
*/


#include <sys/types.h> 
#include <sys/stat.h>  
#include <fcntl.h>     
#include <unistd.h>    
#include <stdio.h> 

int main()
{
    char buff1[80],buff2[80];
    int fd1=open("myfifo1",O_RDONLY);
    int fd2=open("myfifo2",O_WRONLY);
    printf("Enter the text: ");
    scanf("%[^\n]",buff1);
    write(fd2,buff1,sizeof(buff1));
    read(fd1,buff2,sizeof(buff2));
    printf("The text from fifo file: %s\n",buff2);
}