#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j;
    int rowNo, colNo;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    /* Row */
    printf("\nEnter row number: ");
    scanf("%d", &rowNo);

    printf("Elements of row %d: ", rowNo);
    for(j = 0; j < c; j++)
    {
        printf("%d ", a[rowNo][j]);
        rowSum += a[rowNo][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNo, rowSum);

    /* Column */
    printf("\nEnter column number: ");
    scanf("%d", &colNo);

    printf("Elements of column %d: ", colNo);
    for(i = 0; i < r; i++)
    {
        printf("%d ", a[i][colNo]);
        colSum += a[i][colNo];
    }
    printf("\nThe sum of column %d: %d\n", colNo, colSum);

    return 0;
}
