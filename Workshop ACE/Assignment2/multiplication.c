#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the number (table to be calculated)\n");
    scanf("%d",&num1);
    for(num2=1;num2<=10;++num2)
    { 
        printf("%d x %d = %d\n",num1,num2,num1*num2);
    }
    return 0;
}