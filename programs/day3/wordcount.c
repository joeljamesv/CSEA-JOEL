#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
    int cnt=0;
    char str[30];
    printf("enter the string");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' '&&isalpha(str[i+1]))
        {
            cnt++;
        }
    }

    printf("%d",cnt+1 );
}
