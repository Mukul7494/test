#include <Stdio.h>
void main()
{
    int i;
    for (i = 0; i <= 255; i++)
    {
        printf("ASCII value of character ");
        printf("%c\t%d \n", i, i);
    }
}