// for calculating lcm
#include <Stdio.h>
int main()
{
    int num1, num2, i;
    printf("Enter first number ");
    scanf("%d", &num1);
    printf("Enter second number ");
    scanf("%d", &num2);
    for (i = num1 > num2 ? num1 : num2; i <= num1 * num2; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            break;
        }
    }
    printf("LCM is %d", i);
}