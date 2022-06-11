#include <stdio.h>
int main()
{
    int num1, num2, sum = 0;
    printf("Enter the number ");
    scanf("%d", &num1);
    num2 = 1;
    printf("%d Natural no. are : ", num1);
    while (num2 <= num1)
    {
        printf("%d ", num2);
        sum += num2;
        num2++;
    }
    printf("\n sum of %d natural no are : %d", num1, sum);
    return 0;
}