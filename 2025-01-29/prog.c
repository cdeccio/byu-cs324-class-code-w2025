#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>

/* Usage:
 * ./prog
 * Enter Ctrl-C while program is running
 */
void hello(int signum) {
	printf("Hello\n");
}

int main(int argc, char *argv[]) {
	int x = 0;

	// setup signal handler
	struct sigaction sigact;
	sigact.sa_handler = hello;
	sigact.sa_flags = 0;
	// install signal handler for SIGINT
	sigaction(SIGINT, &sigact, NULL);

	while (x < 1000) {
		printf("(main) x = %d\n", x++);
		sleep(1);
	}
}
