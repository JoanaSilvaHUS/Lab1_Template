#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void printArray(int arr[], int arrLength){
    printf("[ ");

    for (int i = 0; i<arrLength; i++)
    {
        printf("%d%s", arr[i], (i<arrLength - 1 ? ", " : ""));

    }

    printf("]\n");
    
}

double sum(int arr[], int arrLength)
{
    double sum = 0.0; 

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
    double meanA = mean(arr, arrLength);
    double sumSqDIff = 0;
    for(int i = 0; i < arrLength; i++)
    {
        sumSqDIff += pow(arr[i]-meanA,2);
    }

    return sumSqDIff/(arrLength-1);
}

double standardDeviation(int arr[], int arrLength){
    return sqrt(variance(arr, arrLength));
}