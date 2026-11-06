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
        printf("child process\n");
        execl("/bin/ls", "ls", "-l", ".", NULL);
    } else {
        sleep(1);
        printf("parent process\n");
        execl("/bin/ls", "ls", "-l", ".", NULL);
    }
}
