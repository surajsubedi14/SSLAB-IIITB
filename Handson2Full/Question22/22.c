// /*
// ============================================================================
// Name : 22.c
// Author : Suraj Subedi
// Description :  Write a program to wait for data to be written into FIFO within 10 seconds, use `select` system call with FIFO..
// Date: 4th Oct, 2023.
// ============================================================================
// */


// #include <sys/types.h> 
// #include <sys/stat.h>  
// #include <fcntl.h>     
// #include <unistd.h>    
// #include <stdio.h> 
// #include <sys/time.h>

// int main()
// {
//     printf("hell0");
//     char buff[80];
//     fd_set rfds;
//     struct timeval tv;
//     tv.tv_sec=10;
//     printf("how");
//     int fd=open("myfifo",O_RDONLY);
//     FD_ZERO(&rfds);
//     printf("opening\n");
//     if(!select(fd+1,&rfds,NULL,NULL ,&tv))
//         printf("No data is available for reading yet\n");
//     else{
//         printf("Data is available now\n");
//         read(fd,buff,sizeof(buff));
//         printf("Data from FIFO: %s\n",buff);
//     }



// }
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>

int main() {
    char buff[80];
    fd_set rfds;
    struct timeval tv;

    int fd = open("myfifo", O_RDONLY | O_NONBLOCK); // Open the FIFO in non-blocking mode

    if (fd == -1) {
        perror("Error opening FIFO for reading");
        return 1;
    }

    FD_ZERO(&rfds);
    FD_SET(fd, &rfds); // Add the FIFO to the set of file descriptors to monitor

    tv.tv_sec = 10;
    tv.tv_usec = 0;

    int retval = select(fd + 1, &rfds, NULL, NULL, &tv);

    if (retval == -1) {
        perror("Error in select");
    } else if (retval == 0) {
        printf("No data is available for reading within the 10-second timeout\n");
    } else {
        printf("Data is available now\n");
        read(fd, buff, sizeof(buff));
        printf("Data from FIFO: %s\n", buff);
    }

    close(fd);
    return 0;
}
