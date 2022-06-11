// for calculating the power of a number with for loop
#include <stdio.h>
int main()
{
    int num1, pow;
    long long power = 1;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    printf("Enter the power you want : ");
    scanf("%d", &pow);
    printf("%d to the power %d is : ", num1, pow);
    for (int i = 1; i <= pow; ++i)
    {
        power = power * num1;
    }
    printf("%lld ", power);
}