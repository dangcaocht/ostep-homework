//
// Created by Cao Nguyen on 6/11/26.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int x = 100;
    printf("(pid:%d) hello world %d \n", (int) getpid(),  x);
    int rc = fork();
    if (rc < 0) {
        printf("(pid:%d) fork error\n", (int) getpid());
    } else if (rc == 0) {
        // child update x to 101
        x = 101;
        printf("(pid:%d) hello world from child %d \n", (int) getpid(), x);
    } else {
        // parent update x to 102
        x = 102;
        printf("(pid:%d) hello world from parent %d \n", (int) getpid(), x);
    }
}

