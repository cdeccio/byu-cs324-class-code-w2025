#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>

int globx = 0;

void hello(int signum) {
	globx = 100;
}

int main(int argc, char *argv[]) {
	int x = 0;

	// setup signal handler
	struct sigaction sigact;
	sigact.sa_handler = hello;
	sigact.sa_flags = 0;

	// install signal handler for SIGINT
	sigaction(SIGINT, &sigact, NULL);

	sigset_t mask, oldmask;
	sigemptyset(&mask);
	sigaddset(&mask, SIGINT);
	sigprocmask(SIG_SETMASK, &mask, &oldmask);

	for (int i = 0; i < 100; i++) {
		if (globx == 15) {
			sigprocmask(SIG_SETMASK, &oldmask, NULL);
		}
		printf("x = %d\n", globx++);
		sleep(1);
	}
}
