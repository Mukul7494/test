#include <stdio.h>
int main()
{
    int row,rowmax, col;
    printf("Enter the number of row ");
    scanf("%d", &rowmax);
    for (row = 0; row < rowmax; ++row)
    {
       
        for (col = 0; col <= row; ++col)
        {
            printf("*");
        }
        printf("\n");
    }
}
