#include <stdio.h>
int main()
{
    int row, col, rowmax, space;
    printf("Enter the number of Rows :");
    scanf("%d", &rowmax);
    for (row = 1; row <= rowmax; row++)
    {
        for (space = 1; space <= rowmax - row; space++)
        {
            printf(" ");
        }
        for (col = 1; col <=row ; col++)
        {
            printf("%d", col);//for the ascending number upto  middle line//
        }
    
    for(col=row-1;col>=1;--col){//for the other half of triangle in descending order upto 1//
    printf("%d",col);
    }
        printf("\n");
    }
}