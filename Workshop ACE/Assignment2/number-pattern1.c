#include<stdio.h>
int main()
{
    int row,rowmax,col,num1=1;
    printf("Enter the number of rows ");
    scanf("%d",&rowmax);
    for(row=0;row<rowmax;row++)
    {
        for(col=0;col<row;col++)
        {
            printf("%d ",num1);
            num1++;
        
        }
        printf("\n");
    }
}