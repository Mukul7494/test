// for printing prime numbers
#include <Stdio.h>
int main()
{
    int num1, i, j, isPrime = 1;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    for (i = 2; i < num1; i++)
    {
        isPrime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }
}