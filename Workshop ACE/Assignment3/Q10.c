// To find no. of digits.
#include <Stdio.h>
#include <math.h>
int main()
// {

//     long long num1, num2, num3;
//     printf("Enter the number : \n");
//     scanf("%lli", &num1);
//     for (num2 = 0; num1 > 0; num2++)
//     {
//         num1 = num1 / 10;
//     }
//     printf("%lli", num2);
// }
// Another method
{

    long long num1, digits;
    printf("Enter the number : \n");
    scanf("%lli", &num1);
    digits = log10(num1);
    printf("The Total Number of Digits is : %d ", digits + 1);
}