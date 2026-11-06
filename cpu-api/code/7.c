//
// Created by Cao Nguyen on 6/11/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int rc = fork();
    printf("parent process (pid:%d)\n", getpid());
    if (rc == 0) {
        close(STDOUT_FILENO);
        printf("child process (pid:%d)\n", getpid());
    } else {
        wait(NULL);
        printf("parent process (pid:%d)\n", getpid());
    }
}