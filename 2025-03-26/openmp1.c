#include<omp.h>
#include<stdio.h>
#include<unistd.h>

int main() {
        #pragma omp parallel for schedule(static, 1)
	for (int i = 0; i < 12; i++) {
		x++;
		printf("thread %d: i = %d\n",
				omp_get_thread_num(), i);
		sleep(i);
	}
}
