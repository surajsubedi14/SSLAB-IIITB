#include<stdio.h>
#include<sys/select.h>
#include<sys/time.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	struct timeval tv;
	fd_set readfs;
	int ret;
	tv.tv_sec=10;
	tv.tv_usec=0;
	FD_ZERO(&readfs);
	FD_SET(0,&readfs);
	ret=select(1,&readfs,NULL,NULL,&tv);
	if(ret)
	{
		printf("data available in 10 sec");
	}
	else
	{
		printf("data is Not");
	}
	return 0;
}	
