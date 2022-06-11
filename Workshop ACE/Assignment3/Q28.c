// for adding all prime numbers between to n
#include <Stdio.h>
int main()
{
    int num1, i, j, isPrime = 1, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &num1);
    printf("\nThe prime number between 1 to %d is : ", num1);

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
            sum += i;
        }
    }
    printf("\nThe sum of prime numbers is : %d ", sum);
}