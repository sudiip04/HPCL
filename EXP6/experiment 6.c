//Write a C program utilizing OpenMP directives to demonstrate the behavior of the private clause.

#include <stdio.h>
#include <omp.h>

int main() {
    int val = 100;

    #pragma omp parallel private(val)
    {
        int thread_id = omp_get_thread_num();
        val = thread_id * 10;
        printf("Thread %d: val = %d\n", thread_id, val);
    }

    printf("Outside parallel region: val = %d\n", val);

    return 0;
}
