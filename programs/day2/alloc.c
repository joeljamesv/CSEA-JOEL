#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

void main()
{
   int n=10;
   int * p=malloc(n);
   if(p==NULL)
   {
    printf("error");
   }

   printf("allocated %d bytes of memory \n",n);
   printf("%p\t%p\t%p",p,p+1,p+2);
}