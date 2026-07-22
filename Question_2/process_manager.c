#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

int main() {
    pid_t pid1, pid2;
    int status;

    pid1 = fork();

    if (pid1 == 0) {
        printf("Child Process 1 started (PID: %d)\n", getpid());
        sleep(3);
        printf("Child Process 1 completed.\n");
        exit(0);
    }

    pid2 = fork();

    if (pid2 == 0) {
        printf("Child Process 2 started (PID: %d)\n", getpid());
        sleep(20);
        printf("Child Process 2 completed.\n");
        exit(0);
    }

    printf("Parent Process (PID: %d)\n", getpid());

    sleep(5);

    if (kill(pid2, 0) == 0) {
        printf("Child Process 2 is still running.\n");
        printf("Terminating Child Process 2...\n");
        kill(pid2, SIGKILL);
    }

    while (wait(&status) > 0);

    printf("All child processes handled successfully.\n");

    return 0;
}