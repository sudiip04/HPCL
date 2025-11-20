//Write a Parallel C program which should print the series of 2 and 4. Make sure both should be executed by different threads

#include <stdio.h>
#include <omp.h>

int main(void) {
    omp_set_num_threads(2);   // force exactly 2 threads

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();

        if (tid == 0) {
            printf("Thread %d printing multiples of 2:\n", tid);
            for (int i = 1; i <= 5; i++) {
                printf("2 x %d = %d\n", i, 2 * i);
            }
        }

        if (tid == 1) {
            printf("Thread %d printing multiples of 4:\n", tid);
            for (int i = 1; i <= 5; i++) {
                printf("4 x %d = %d\n", i, 4 * i);
            }
        }
    }
    return 0;
}
