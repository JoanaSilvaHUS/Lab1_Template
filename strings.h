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
    int j = size(str)-1;
    while (i<j){
        if (tolower(str[i]) != tolower(str[j])) return false;
        i++;
        j--;
    }
    return true;
}   