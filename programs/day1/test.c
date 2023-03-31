#include<stdio.h>
#include<string.h>

void main()
{
    int x;
    char st[10];
    printf("enter the string\n");
    gets(st);

    for(int i=0;i<strlen(st);i++)
    {
        if(st[i]=='*')
        {
            x++;
        }
        else if(st[i]=='#')
        {
            x--;
        }
        else
        {
            printf("error\n");
            break;
        }
    }

    printf("%d",x);
}