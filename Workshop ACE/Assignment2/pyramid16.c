#include <stdio.h>
int main()
{
    int row, rowmax, col, space;
    printf("Enter the number of rows ");
    scanf("%d", &rowmax);
    for (row = 0; row < rowmax; row++)
    {
        for (space = 1; space < rowmax - row; space++)
        {
            printf(" ");
        }
        for (col = 0; col < row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}