#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[10], str2[10];
    printf("enter the string");
    gets(str);
    int n = strlen(str);


    for (int i = 0; i < n; i++)
    {
        str2[i] = str[n - i-1];
    }
    puts(str);
    puts(str2);
    if (strcmp(str, str2) == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}