#include<stdio.h>
int main()
{int day=1329,year,years,week,weeks,days;
year=day/365;
printf("Years = %d\n",year);
years=day%365;
week=years/7;
printf("Weeks = %d\n",week);
days=day%(365*year+7*week);
printf("Days = %d",days);
return 0;
}