// 1st Star pattern in tringle

#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}