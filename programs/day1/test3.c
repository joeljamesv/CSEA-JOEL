#include <stdio.h>
#include<string.h>
void main()
{
    char ar[10];
    int n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("%d",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &ar[i]);
        printf(" %d ",i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (ar[i] == '0')
        {
            ar[i] = '$';
        }
        printf("%c ", ar[i]);
    }
}