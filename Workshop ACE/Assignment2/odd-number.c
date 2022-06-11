#include<stdio.h>
int main()
{
    int num=0,odd,sum=0,i;
    printf("Enter How many odd number you want\n");
    scanf("%d",&num);
    for(i=0;i<num;++i)
    {odd=2*i+1;
    printf(" %d ",odd);
    sum=odd+sum;

    }
    printf("\nThe sum is : %d ",sum);
}