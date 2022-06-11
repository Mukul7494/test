#include<stdio.h>
int main()
{
    int age,marks;
    printf("enter your age = ");
    scanf ("%d",&age);
    printf("enter your marks = ");
    scanf("%d",&marks);
    switch(age){
        case 14:
        printf("your age is 14\n");
        break;
        case 18:
        printf("your age is 18\n");
        break;
        default :
        printf ("your age is neither 14 nor 18\n");
    }
 switch(marks){
     case 50:
     printf ("your marks is 50\n");
     break;
     case 19:
     printf("you are fail because you have 19 marks\n");
     break ;
     default :
     printf("your have enter number out of the directory\n");

     break;
 }









    return 0;
}