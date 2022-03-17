#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "arrays.h"
#include <string.h>
#include "strings.h"

#define LENGTH 5
int main() 
{   
    int v[LENGTH] = {2,3,6,4,7};

    printArray(v, LENGTH);

    printf("Soma: %0.00f\n", sum(v, LENGTH));
    printf("Média: %0.02f\n", mean(v, LENGTH));
    printf("Variance: %0.02f\n", variance(v, LENGTH));
    printf("Standard deviation: %0.02f\n", standardDeviation(v, LENGTH));

    char str1[20];
    char str2[20];

    printf("Digite uma frase: ");
    scanf("%s", str1);
    printf("Digite outra frase: ");
    scanf("%s", str2);
    equal(str1, str2);
    isPalindrome(str1);
    isPalindrome(str2);
    hasDuplicates(str1);
    hasDuplicates(str2);
    letterFrequency(str1);
    letterFrequency(str2);


    return 0;
}
