//Write your first Parallel Program, with which you should be able to print your NAME from 4 underline cores.

#include <stdio.h>
#include <omp.h>

int main(void) {
    omp_set_num_threads(4);

    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        printf("Thread %d says: Paras\n", tid);
    }
    return 0;
}
