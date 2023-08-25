#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fd=creat("ss1.txt",0777);
	if(fd==-1)
	{ 
		printf("Error");
		exit(1);
	}
	printf("%d",fd);
	creat("ss2.txt",0777);
	creat("ss3.txt",0777);
	creat("ss4.txt",0777);
        creat("ss5.txt",0777);
//	while(1)
//	{
//	}
return 0;


}

