#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int fd_open=open("text2.txt",O_CREAT|O_WRONLY|O_RDONLY);

	char* buff="I am here!! sldmlsda";

	char buf2[10];

	write(fd_open,buff,10);

	int ls = lseek(fd_open,10,SEEK_CUR);
	write(fd_open,buff,10);
	printf("%d",ls);
	return 0;
}

