// for checking the number is prime or not
#include <Stdio.h>
int main()
{
    int num1, i, isPrime = 1;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    for (i = 2; i < num1; i++)
    {
        isPrime = 1;
        if (num1 % i == 0)
        {
            isPrime = 0;
            printf("%d is not Prime Number ", num1);
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is a Prime Number ", num1);
    }
}