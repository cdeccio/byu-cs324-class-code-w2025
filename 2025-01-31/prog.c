#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>

void hello(int signum) {
	for (int i = 0; i < 10; i++) {
		printf("(handler %d) i = %d\n", signum, i);
		sleep(1);
	}
}

int main(int argc, char *argv[]) {
	int x = 0;

	// setup signal handler
	struct sigaction sigact;
	sigact.sa_handler = hello;
	sigact.sa_flags = 0;

	// install signal handler for SIGINT
	sigaction(SIGINT, &sigact, NULL);
	sigaction(SIGTERM, &sigact, NULL);

	while (1) {
		printf("x = %d\n", x++);
		sleep(1);
	}
}
