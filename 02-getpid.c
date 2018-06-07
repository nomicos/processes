#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("The PID of the parent is %d.\n", (int) getpid());

    pid_t pid = fork();
    
    printf("After the fork... ");

    if (pid == 0) {
        printf("I'm the child and my PID is %d.\n", (int) getpid());
    } else {
        printf("I'm the parent and my PID is still %d. "
               "fork() returned %d for me.\n", (int) getpid(), pid);
    }

    return 0;
}
