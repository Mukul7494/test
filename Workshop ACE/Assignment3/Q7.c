#include <stdio.h>
int main()
{
    int num1 = 1, num2, even, sum = 0;
    printf("Enter the number of even terms \n");
    scanf("%d", &num2);
    while (num1 <= num2 / 2)
    {
        even = 2 * num1;
        sum += even;
        num1++;
        printf("%d ", even);
    }
    printf("\n the sum of even number between 1 to %d  is : %d", num2, sum);
}