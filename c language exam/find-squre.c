#include <stdio.h>

int main()
{
    int arr[5], i;
    int *p;

    p = arr;

    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Squares of elements are:\n");
    for(i=0;i<5;i++)
    {
        printf(" squre of %d =%d\n ",*(p+i) , (*(p+i)) * (*(p+i)));
    }

    return 0;
}
