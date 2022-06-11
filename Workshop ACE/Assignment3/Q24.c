// calculating hcf
#include <Stdio.h>
int main()
{
    int num1, num2, min, hcf, i;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    // if (num1 > num2)
    // {
    //     min = num2;
    // }
    // else
    // {
    //     min = num1;
    // }
    min = num1 > num2 ? num2 : num1;
    for (i = 1; i <= min; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
        else
        {
            hcf = 1;
        }
    }
    printf("HCF is %d ", hcf);
}