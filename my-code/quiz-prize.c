#include<stdio.h>
int main()  
{
 int exam,math ,science;
printf ("enter the exam you have passed\n");
scanf ("%d",& exam);
printf("you have entered %s as you passed exam\n",exam);
if(exam = math) { printf("your prize is ten rupees");}
else if (exam = science) { printf("your prize is ten rupees\n");}
else (exam = math+science); {printf("your prize is fortyfive rupees\n ");}
return 0;
}