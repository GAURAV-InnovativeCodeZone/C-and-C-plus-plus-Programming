// Multiplication table 1 to 10

#include<stdio.h>
int main()
{
int i,j;
    for (i=1; i<=10; i++)
    {
        printf("\n Multiplication table of %d \n", i);
        for (j=1; j<=10; j++)
        printf("\n %dx%d=%d ", i,j,i*j);
        printf("\n");
    }

return 0;
}