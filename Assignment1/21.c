#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
	int pid=getpid();
	printf("Parent Process id: %d.\n",pid);
	int cpid=fork();
	printf("Child Process id: %d.\n",cpid);
	return 0;
}
