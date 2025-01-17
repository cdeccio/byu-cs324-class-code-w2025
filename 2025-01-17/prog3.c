#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

/*
 * Usage:
 * ./prog3.c
 */

int main() {
	int ret = fork();
	int status;
	if (ret == 0) {
		printf("Child\n");
		sleep(10);
		exit(3);
	} else {
		printf("Parent; child has pid %d\n", ret);
		sleep(10);
		sleep(10);
		wait(&status);
		printf("Child exited with status %d!\n",
				WEXITSTATUS(status));
		sleep(10);
	}
}
