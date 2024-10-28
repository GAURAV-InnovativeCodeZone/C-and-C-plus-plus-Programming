// 2nd Star pattern

#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=10;a++)     // rows
    {
        for(b=10;b>=a;b--)    // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}