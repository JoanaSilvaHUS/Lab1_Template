#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool equal(const char str1[], const char str2[])
{
    int i = 0;
    for ( ; str1[i]!=0 && str2[i]!=0; i++)
    {
        if (tolower(str1[i]) != tolower(str2[i])) return false;
    }

    return str1[i]==0 && str2[i] == 0;
}

bool isPalindrome(const char str[])
{
    int i = 0;
    int j = strlen(str);
    while (i<j){
        if (tolower(str[i]) != tolower(str[j])) return false;
        i++;
        j--;
    }
    return true;
}   

bool hasDuplicates(const char str[]){ //nao tá a funcionar 100% corretamente
    
    for(int i = 0; i <strlen(str) - 1; i++){
        for (int j = 1; j < strlen(str); j++ )
        {
            if (str[i] == str[j] && i != j)
            {
                return true;
            }
        }
    }
    return false;
}

void letterFrequency(const char str[])
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int counter=0;

    printf("Letra\t| Freq: \n");
    for(int i = 0; i < strlen(alphabet); i++)
    {
        for(int j = 0; j < strlen(str); j++)
        {
            if (alphabet[i] == str[j]){
                counter++;
            }
        }
    printf("%c\t| %d\n", alphabet[i], counter);
    counter = 0;
    }

    
}