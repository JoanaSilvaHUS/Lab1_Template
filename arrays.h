#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int arrLength){
    printf("[ ");

    for (int i = 0; i<arrLength; i++)
    {
        printf("%d%s", arr[i], (i<arrLength - 1 ? ", " : ""));

    }

    printf("]\n");
    
}

int sum(int arr[], int arrLength)
{
    int sum = 0.0; 

    for (int i = 0; i<arrLength; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

double mean(int arr[], int arrLength)
{
     return sum(arr, arrLength)/arrLength;
}

double variance(int arr[], int arrLength)
{
    
}