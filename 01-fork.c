#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    printf("Hi, ");

    pid_t pid = fork();

    if (pid == 0) {
        printf("I'm the child.\n");
    } else {
        printf("I'm the parent. PID of the child is %d.\n", pid);
    }

    return 0;
}
