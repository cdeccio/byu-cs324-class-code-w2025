#include<stdio.h>

#define BUFSIZE 64

/*
 * Usage:
 * ./prog2
 *
 * (Enter a string at the prompt, and press Enter.)
 */

int main(int argc, char *argv[]) {
	char buf[BUFSIZE];
	fgets(buf, BUFSIZE, stdin);
	printf("You entered via stdin: %s\n", buf);
}
