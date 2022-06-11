#include <stdio.h>
int main()
{
    int row, col, rowmax, space;
    char star = '*';
    printf("Enter the number of Rows :");
    scanf("%d", &rowmax);
    for (row = 1; row <= rowmax; row++)
    {
        for (space = 1; space <= rowmax - row; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    for (row = rowmax - 1; row >= 1; row--)
    {
        for (space = 1; space <= rowmax - row; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= (2 * row - 1); col++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
}