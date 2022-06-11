// write number into words
#include <stdio.h>
int main()
{
    int num1, rev = 0;
    printf("Enter the number : ");
    scanf("%d", &num1);
    while (num1 != 0)
    {
        rev = (num1 % 10) + (rev * 10);
        num1 = num1 / 10;
    }
    while (rev != 0)
    {
        switch (rev % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        rev = rev / 10;
    }
}
