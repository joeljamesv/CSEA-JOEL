#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("size of the array");
    scanf("%d", &n);
    int arr =(int*) calloc(n, sizeof(int));

    printf("enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    printf("given array");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    printf("removing first element arr[0]=%d.\n",arr[0]);
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr=realloc(arr,(n-1)*sizeof(int));

    printf("modified array: ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);


}