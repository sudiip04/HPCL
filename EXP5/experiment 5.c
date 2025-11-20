//Write a C program utilizing OpenMP directives to demonstrate the behavior of the private clause.
//The program should perform the following steps:
//Initialize OpenMP with 4 threads.
//Declare an integer variable val and initialize it to a value of 1234.
//Print the initial value of val outside the OpenMP parallel region.
//Enter an OpenMP parallel region using the omp parallel directive, with the firstprivate clause applied to the variable val.
//Inside the parallel region, each thread should print the current value of val, increment it by 1, and then print the updated value.
//Print the final value of val outside the parallel region.

#include <stdio.h>
#include <omp.h>

int main(void) {
    int val = 1234;
    omp_set_num_threads(4);
    printf("Initial value of val outside parallel region: %d\n", val);

    #pragma omp parallel firstprivate(val)
    {
        int tid = omp_get_thread_num();
        printf("Thread %d: initial val = %d\n", tid, val);
        val++;
        printf("Thread %d: updated val = %d\n", tid, val);
    }

    printf("Final value of val outside parallel region: %d\n", val);
    return 0;
}
