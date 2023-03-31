#include<stdio.h>
 void main()
 {
    float a=12,b=10;
    float * ptr1,*ptr2;
    
    ptr1=&a;
    ptr2=&b;

    printf("%f",*ptr1 / *ptr2);


 }
