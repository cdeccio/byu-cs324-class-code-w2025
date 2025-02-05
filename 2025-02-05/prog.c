#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<signal.h>
#include<stdlib.h>

int main() {
	int ret = fork();
	if (ret == 0) {
		sleep(10);
		exit(3);
	}
	int status, ret2;
	kill(ret, SIGINT);
	ret2 = wait(&status);
	printf("(P) return value of wait = %d\n", ret2);
	if (WIFEXITED(status)) {
		printf("Exited with status %d\n",
				WEXITSTATUS(status));
	} else {
		printf("Terminated by signal %d\n",
				WTERMSIG(status));

	}
	ret2 = wait(&status);
	printf("(P) return value of wait = %d\n", ret2);
}
