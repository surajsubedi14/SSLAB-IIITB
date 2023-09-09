#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
 #include <unistd.h>

int main(int arg, char* argc[])
{
	char *filename;
	if(arg!=2)
	{
		printf("Please Enter the file name:\n");
	}
	else
	{
		filename=argc[1];
		int fd=open(filename,O_CREAT|O_WRONLY,0777);
		int pid=getpid();
		char *s="HI am 
		int bytecount=write(fd,"HI i am from parent:",strlen(s);
		if(bytecount==-1)
		{
			printf("fatel error");
		}
		close (fd);
		int cpid=fork();
		if(cpid==0)
		{
			filename=argc[1];
			int fd1=open(filename,O_CREAT|O_WRONLY|O_APPEND,0777);
			int wb=write(fd1,"Write again",22);
			close(fd1);
			
		}
	}

	return 0;
}

