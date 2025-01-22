#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]) {
	char *newenviron[] = { NULL };
	char *args[] = { "/bin/cat", "-", NULL };

	sleep(20);
	execve("/bin/cat", args, newenviron);
}
