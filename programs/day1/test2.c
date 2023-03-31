#include<stdio.h>
void main()
{
    int ar[10],n,sum;
    printf("enter the number of elements\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    int i;
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
        {
            printf("%d\n",sum);
            printf("not prime");
            break;
        }
    }
    if(i==sum)
    {
        printf("%d\nis prime",sum);
    }

}