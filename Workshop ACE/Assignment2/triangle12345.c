#include<stdio.h>
int main()
{
    int row,coloumn,rowmax;
    printf("Enter max number of rows : ");
    scanf("%d",&rowmax);
    for(row=1;row<=rowmax;row++)
    {
    for(coloumn=1;coloumn<=row;coloumn++)
    {
        printf("%d",coloumn);
    }
       printf("\n");
   
    }
    
}