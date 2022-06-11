#include <stdio.h>
int main()
{
    int a;
    printf("enter your number ");
    scanf("%d", &a);
    if (a < 10)
    {
        printf("your marks is %d so you are faill and don't have any prize", a);
    }
    else if (a > 10 , a < 30)
    {
        printf("your number is %d so you are bairly passed and you don't have any prize", a);
    }
    else if (a<60, a> 30)
    {
        printf("you have passed examination with good marks \n your marks is %d your prize is water bottle", a);
    }

    return 0;
}
