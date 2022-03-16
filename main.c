#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"

#define LENGTH 5
int main() {
   
    int v[LENGTH] = {2,3,6,4,7};

    printArray(v, LENGTH);

    printf("Soma: %0.00f\n", sum(v, LENGTH));
    printf("Média: %0.02f\n", mean(v, LENGTH));
    printf("Variance: %0.02f\n", variance(v, LENGTH));
    printf("Standard deviation: %0.02f\n", standardDeviation(v, LENGTH));


    return 0;
}
