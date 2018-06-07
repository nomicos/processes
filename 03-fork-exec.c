#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

    char *argv[3] = { "command-line", "Hello from the other side.", NULL };

    pid_t pid = fork();

    if (pid == 0) {
        printf("I'm the child (PID %d), I will now do execvp()...\n", (int) getpid());
        execvp("echo", argv);
    }

    /* Only parent gets here. */

    sleep(2);
    printf("Finished executing the parent process (PID %d).\n", (int) getpid());

    return 0;
}
