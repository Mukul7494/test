// for calculating the all the factors
#include <stdio.h>
int main()
{
    int num1, i;
    printf("Enter the number ");
    scanf("%d", &num1);
    printf("All the Factors are : ");
    for (i = 1; i <= num1; i++)
    {
        if ((num1 % i) == 0)
        {
            printf("%d ", i);
        }
    }
}