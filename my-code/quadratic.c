#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 { float a,b,c,d,root1,root2;
 clrscr();
 printf("enter the values of a,b,c,c\n");
 scanf ("%f%f%f", &a,&b,&c);
 if (a==0||b==0||c==0);
 {
     printf("error: roots can't be detected");
 }
else
{
    d = (b*b) - (4.0*a*c);
    if(d>0.00)
{
printf ("roots are real and distinct"):
root1 = -b + sqrt(d)/(2*a)
root2 = -b - sqrt(d)/(2*a)
printf("root1 = %f\nroot2 = %f",root1,root2);
}
else if (d<0)
{
    printf("roots are imaginary");
    root1 = -b / (2*a);
    root2 = sqrt(abs(d))/(2*a);

}
}


return = 0;
 }