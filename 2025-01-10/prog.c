#include<stdio.h>

/*
 * Usage:
 * ./prog 1> bar.txt
 * cat bar.txt
 * ./prog 2> bar.txt
 * cat bar.txt
 */

int main(int argc, char *argv[]) {
	fprintf(stdout, "Hello from STDOUT\n");
	fprintf(stderr, "Hello from STDERR\n");
}
