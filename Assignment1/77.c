#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
int main()
{
	int fd_read = open("cp1.txt", O_RDONLY);
	int fd_write= open("cp2.txt", O_WRONLY | O_CREAT);



}
