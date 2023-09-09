/*
============================================================================
Name : 27.c
Author : Suraj Subedi
Description : Write a program to execute ls -Rl by the following system calls
                a. execl
                b. execlp
                c. execle
                d. execv
                e. execvp
Date: 7th Sept, 2023.
============================================================================
*/
#include <sched.h> // Import for `sched_getscheduler` and `sched_setscheduler`
#include <sys/types.h> // Import for `getpid`
#include <unistd.h>    // Import for `getpid`
#include <stdio.h>     // Import for `perror` and `printf`

void main()
{
    int currentPolicy;
    pid_t pid;
    pid = getpid();
    currentPolicy = sched_getscheduler(pid);
    struct sched_param priority;
    
    priority.sched_priority = 10;

    switch (currentPolicy)
    {
    case SCHED_FIFO:
        printf("Current policy is FIFO\n");
        sched_setscheduler(pid, SCHED_RR, &priority);
        currentPolicy = sched_getscheduler(pid);
        printf("Current policy is %d\n", currentPolicy);
        break;
    case SCHED_RR:
        printf("Current policy is RR\n");
        sched_setscheduler(pid, SCHED_FIFO, &priority);
        currentPolicy = sched_getscheduler(pid);
        printf("Current policy is %d\n", currentPolicy);
        break;
    case SCHED_OTHER:
        printf("Current policy is OTHER\n");
        sched_setscheduler(pid, SCHED_RR, &priority);
        currentPolicy = sched_getscheduler(pid);
        printf("Current policy is %d\n", currentPolicy);
        break;
    default:
        perror("Error while getting current policy\n");
    }
}
