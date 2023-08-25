#include<stdio.h>
#include<sys/stat.h>
#include<stdlib.h>
int main(int arg,char** argv)
{
	struct stat s;
	stat(argv[1],&s);
	if(S_ISREG(s.st_mode))
	{
		printf("FILE Type is: Regular");
	}
	else if(S_ISDIR(s.st_mode))
	{
		printf("File Type is: Directory");
	}
	else if(S_ISCHR(s.st_mode))
	{
		printf("File Type is: Character");
	}
	else if(S_ISBLK(s.st_mode))
	{
		printf("File Tyoe is: Blank");
	}
	else
	{
		printf("File type is: FIFO");
	}
return 0;
}	
