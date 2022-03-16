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

void hasDuplicates(const char str[]){ //nao tá a funcionar 100% corretamente
    int i, j, len, v = 1;

    len = strlen(str);

    printf("\nCaracteres duplicados da frase %s: ", str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                if (v == 1 && str[j] != '\0') {
                    printf("%c  ", str[i]);
                }
                
                v++;
            }
        }
        v = 1;
    }
}

void letterFrequency(const char str[])
{

}