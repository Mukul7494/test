#include<stdio.h>
int main()
{
    int row,rowmax,col;
    printf("Enter the number of rows ");
    scanf("%d",&rowmax);
    for(row=0;row<rowmax;row++)
    {
        for(col=0;col<rowmax-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}