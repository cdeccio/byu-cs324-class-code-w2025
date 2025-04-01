#include<omp.h>
#include<stdio.h>
#include<unistd.h>

int main() {
        #pragma omp parallel for
	for (int i = 0; i < 12; i++) {
		printf("thread %d: i = %d\n",
				omp_get_thread_num(), i);
		sleep(1);
	}
}
