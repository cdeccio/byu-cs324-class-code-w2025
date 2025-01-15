#include <unistd.h>
#include <stdio.h>

/*
 * Usage:
 * ./prog3.c
 */

int main() {
	int x = 1;
	int ret = fork();
	if (ret == 0) {
		x++;
		printf("I am the child! (x = %d)\n", x);
	} else {
		sleep(3);
		printf("I had a child with pid %d! (x = %d)\n", ret, x);
	}
}
