#include<omp.h>
#include<stdio.h>
#include<unistd.h>

int main() {
        #pragma omp parallel
	printf("hello world\n");
	printf("hi world\n");
}
