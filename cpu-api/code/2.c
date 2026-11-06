//
// Created by Cao Nguyen on 6/11/26.
//

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
    int fd = open("./2.output", O_CREAT | O_WRONLY | O_TRUNC);
    int rc = fork();
    if (rc < 0) {
        printf("fork failed\n");
    } else if (rc == 0) {
        printf("child %d \n", fd);
        write(fd, "child", 5);
    } else {
        printf("parent %d \n", fd);
        write(fd, "parent", 6);
    }
}