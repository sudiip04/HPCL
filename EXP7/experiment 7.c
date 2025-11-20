//Write a Parallel C program where the iterations of a loop should be scheduled statically across the team of threads. A thread should perform CHUNK iterations at a time 
//before being scheduled for the next CHUNK of work.

#include <stdio.h>
#include <omp.h>

int main(void) {
    int n = 20;     // total number of iterations
    int chunk = 4;  // chunk size
    int i;

    omp_set_num_threads(4); // 4 threads

    #pragma omp parallel for schedule(static,4)
    for (i = 0; i < n; i++) {
        int tid = omp_get_thread_num();
        printf("Iteration %d handled by thread %d\n", i, tid);
    }

    return 0;
}
