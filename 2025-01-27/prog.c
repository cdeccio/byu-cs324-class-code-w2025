#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

/* Usage:
 * ./prog test.txt 
 * ./prog test1.txt 
 * ./prog /etc/shadow
 */

int main(int argc, char *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	printf("fd val: %d\n", fd);
	if (fd < 0) {
		printf("errno: %d\n", errno);
		perror("main (arbitrary)");
		exit(1);
	}
	printf("No error\n");
}
