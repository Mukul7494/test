// calculating the factorial
#include <Stdio.h>
int main()
{
    int num1, fact = 1;
    printf("Enter the number ");
    scanf("%d", &num1);
    printf("Factorial of %d is : ", num1);
    int i = num1;
    while (i > 0)
    {
        fact = i * fact;
        i--;
    }
    printf("%d ", fact);
}