#include <stdio.h>
int main()
{
    int fuel, distance, consumption;
    printf("Enter the Distance in Km \n");
    scanf("%d", &distance);
    printf("Total Distance = %d Km\n", distance);
    printf("Enter Fuel spent in Ltr\n");
    scanf("%d", &fuel);
    printf("Fuel Spent = %d Ltr\n", fuel);
    consumption = distance / fuel;
    printf("Average Fuel Consumption is = %.3f Km/Ltr", (float)consumption);

    return 0;
}