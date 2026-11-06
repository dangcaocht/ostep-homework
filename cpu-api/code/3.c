//
// Created by Cao Nguyen on 6/11/26.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("(pid:%d) parent started\n", getpid());
    int rc = fork();
    if (rc < 0) {
        printf("fork failed\n");
    } else if (rc == 0) {
        printf("(pid:%d) hello\n", getpid());
    } else {
        sleep(1);
        printf("(pid:%d) goodbye\n", getpid());
    }
}
