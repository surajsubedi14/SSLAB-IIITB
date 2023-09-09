#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main (){
	int v=symlink("ssrocks4","sab");
	if(v<0)
	{
		perror("Failed");
		return 1;
	}
	int f=link("ssrocks4","aman");
	if(f<0)
	{
		perror("Failed");
		return 1;
	}
	int e=mknod("ssrocks10",S_IFIFO,0);
	if(e<0)
		perror("Failed");
	return 0;
}
