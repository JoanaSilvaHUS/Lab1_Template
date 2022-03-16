#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"
#define LENGTH 5
int main() {
   
    int v[LENGTH] = {2,3,6,4,7};

    printArray(v, LENGTH);

    printf("Soma: %d\n", sum(v, LENGTH));
    printf("Média: %.02f\n", mean(v, LENGTH));

    return 0;
}
