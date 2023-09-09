#include <sys/types.h>
#include <unistd.h>    
#include <stdio.h>     

void main()
{
    int  childPid;

    if ((childPid = fork()) != 0)
    {
        
        printf("Parent PID: %d\n", getpid());
        printf("Putting parent to sleep for 100s!\n");
        sleep(120); 
        printf("Parent is now awake!\n");
    }
    else
    {
        // Only child process can enter this branch
        printf("Child PID: %d\n", getpid());
        printf("Exiting child!\n");
        _exit(0); // Terminate the child process
        }
}
