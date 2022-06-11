#include <stdio.h>
int main()
{
    int num1,natural,sum=0;
    printf("The first 10 natural no is :\n");
    for (num1 = 0; num1<10; num1++)
    {
        natural=num1+1;
        printf ("%d ",natural);
    sum=sum+natural;
    }
    printf("\n");
    printf("The sum is : %d\n",sum);
    return 0;
}