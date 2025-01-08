#include<stdio.h>
#include<stdlib.h>

/*
 * Usage:
 * MYVAR=foo ./prog3
 */

int main(int argc, char *argv[]) {
	char *buf;
	buf = getenv("MYVAR");
	if (buf != NULL) {
		printf("MYVAR = %s\n", buf);
	}
}
