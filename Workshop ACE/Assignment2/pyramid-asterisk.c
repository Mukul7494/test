#include <stdio.h>
int main()
{
    int row, rowmax, col,space;
    printf("Enter the value of Rows ");
    scanf("%d", &rowmax);
    for (row = 0; row < rowmax; row++)
    {
        for (space = 1; space < rowmax - row; space++)
        {
            printf(" ");
        }
        for (col = 0; col <= row; col++)
        {
            printf("* ");
        
        }
        printf("\n");
    }
}
