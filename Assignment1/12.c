#include<stdio.h>
#include<fcntl.h>
int main()
{
	FILE *file=fopen("test2.txt","w");
	int fd=fileno(file);
	int mode=fcntl(fd,F_GETFL);
	switch(mode){
		case 32768:printf("r");break;
		case 32769:printf("w");break;
		case 33793:printf("a");break;
		case 32770:printf("r+||w+");break;
		case 32794:printf("a+");break;

}
return 0;
}
