#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the number ");
    scanf("%d", &num1);
    num2 = 1;
    printf("%d Natural no. are : ", num1);
    while (num2 <= num1)
    {
        printf("%d ", num2);
        num2++;
    }
    return 0;
}