#include<stdio.h>

/*
 * Usage:
 * ./prog1 foo
 */

int main(int argc, char *argv[]) {
	if (argc > 1) {
		printf("Your argument was: %s\n", argv[1]);
	}
}
