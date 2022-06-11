#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
float s,A;
printf ("enter the numbers\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
A=s*((s-a)*(s-b)*(s-c));
printf ("the area of triangle is%f",A);
return 0;


}