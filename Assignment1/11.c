// Write a program to open a file, duplicate the file descriptor 
// and append the file with both the descriptors and check whether the file is updated properly or not.
// a. use dup b. use dup2 c. use fcntl

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int oldfd = open("sample.txt",O_RDWR);
    if(oldfd == -1){
        perror("error opening file");
        return 1;
    }
    int dupfd =  dup(oldfd);
    if(dupfd == -1){
        perror("error in  duplicating");
        return 1;
    }

    const char* append = "Hi this is the appended text from oldfd\n";

    int content_oldfd = write(oldfd,append, strlen(append));

    if(content_oldfd == -1){
        "error in appending data from oldfd";
        return 0;
    }

    const char* append2 = "Hi this is the appended text from dupfd\n";

    int content_dupfd = write(dupfd,append2, strlen(append2));

    if(content_dupfd == -1){
        "error in appending data from dupfd";
        return 0;
    }

    int dupfd2 =  dup2(oldfd,5);
    if(dupfd2 == -1){
        perror("error in  duplicating");
        return 1;
    }

    const char* append3 = "Hi this is the appended text from dupfd2\n";

    int content_dupfd2 = write(dupfd2,append3, strlen(append3));

    if(content_dupfd2 == -1){
        perror("error in appending data from dupfd2");
        return 0;
    }

    int fnctlfd =  fcntl(oldfd, F_DUPFD);

    if(fnctlfd == -1){
        perror("error in  duplicating");
        return 1;
    }

    const char* append4 = "Hi this is the appended text from fcntl\n";

    int content_fcntlfd = write(oldfd,append4, strlen(append4));

    if(content_fcntlfd == -1){
        perror("error in appending data from fcntlfd");
        return 0;
    }

    int fd_oldfd = close(oldfd);
       if(fd_oldfd == -1){
        perror("totally useless 1");
    }

    int fd_dupfd = close(dupfd);
       if(fd_dupfd == -1){
        perror("totally useless 2");
    }

    int fd_dupfd2 = close(dupfd2);
       if(fd_dupfd2 == -1){
        perror("totally useless 3");
    }

    int fd_fcntl = close(fnctlfd);
       if(fd_fcntl == -1){
        perror("totally useless 4");
    }


    
    return 0;
}
