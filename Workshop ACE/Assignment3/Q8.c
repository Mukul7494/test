#include <stdio.h>
int main()
{
    int num1 = 1, num2, odd, sum = 0;
    printf("Enter the number of odd terms \n");
    scanf("%d", &num2);
    while (num1 <= num2 / 2)
    {
        odd = (2 * num1) - 1;
        sum += odd;
        num1++;
        printf("%d ", odd);
    }
    printf("\n the sum of odd number between 1 to %d  is : %d", num2, sum);
}