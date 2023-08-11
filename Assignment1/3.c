#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
	int f = open("createdFileusingC", O_RDWR);
	if(f == -1){
		printf("failed to create the file");
		return 1;
	}
	printf("successfullu created the file ");
	printf("The file descripor is: %d: ", f);

	//using create() sytem call
	int fd = creat("createdFileusingC", O_RDWR);
	if(fd == -1){
		printf("failed to create the file ");
		return 1;
	}
	printf("file created successfully using creat() system call ");
	printf("the file descriptor value is : %d", fd);
	return 0;
}
