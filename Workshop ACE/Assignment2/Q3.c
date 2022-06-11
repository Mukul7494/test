#include <stdio.h>
int main()
{
    int num1, i, sum = 0;
    printf("Enter how many natural number you want ");
    scanf("%d", &num1);
    printf("The first %d natural number is:\n", num1);
    for (i = 1; i <= num1; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of natural number upto %d terms : %d", num1, sum);
    return 0;
}
