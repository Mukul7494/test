#include <stdio.h>
int main()
{
    int id, salary, hours;
    printf("Enter the Employees ID (Max 10.Chars) :\n");
    scanf("%d", &id);
    printf("Your id is = %d\n", id);
    printf("Enter your working hours\n");
    scanf("%d", &hours);
    printf("Your working hours is = %d hrs\n", hours);
    salary = 15000 * hours;
    printf("Salary =U$ %.2f", (float)salary);
    return 0;
}