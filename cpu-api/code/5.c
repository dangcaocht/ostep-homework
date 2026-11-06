//
// Created by Cao Nguyen on 6/11/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int rc = fork();
    if (rc < 0) {
        printf("fork failed\n");
    } else if (rc == 0) {
        int rw = wait(NULL);
        printf("child process (pid:%d), (rw:%d) \n", getpid(), rw);
    } else {
        int rw = wait(NULL);
        printf("parent process (pid:%d), (rw:%d)\n", getpid(), rw);
    }
}
