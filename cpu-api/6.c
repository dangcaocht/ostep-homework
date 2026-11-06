//
// Created by Cao Nguyen on 6/11/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int child1 = fork();

    if (child1 == 0) {
        sleep(2);
        printf("child1 process (pid:%d)\n", getpid());
        return 0;
    }

    int child2 = fork();
    if (child2 == 0) {
        printf("child2 process (pid:%d)\n", getpid());
        return 0;
    }

    int r2 = waitpid(child2, NULL, 0);
    int r1 = waitpid(child1, NULL, 0);

    printf("parent process (pid:%d), r1:%d, r2:%d\n", getpid(), r1, r2);

}
