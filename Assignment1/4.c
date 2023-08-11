#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
	FILE* f = fopen("fileFor4.txt", "rw");
	if(f == NULL){
		printf("Failed to open the file");
	}
	fclose(f);
	//using  O_EXCL
	int fd = open("fileFor4.txt", O_RDWR);
	if(fd == -1){ printf("faild to open existing file by O_RDWR flag"); return 1;}
	printf("file created successfully");
	close(fd);
	return 0;
}
