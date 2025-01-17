#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void foo() {
	exit(4);
}

int main() {
	foo();
	printf("pid = %d, ppid = %d\n", getpid(), getppid());
	return 3;
}
