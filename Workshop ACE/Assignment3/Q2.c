#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the number ");
    scanf("%d", &num1);
    printf("%d Natural no. in Revere order are : ", num1);
    while (num1 >= 1)
    {
        printf("%d ", num1);
        --num1;
    }
    return 0;
}