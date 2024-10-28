// 4th Star pattern 

#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=10;a++)    // rows
    {
        for(b=1;b<a;b++)   // spaces
        {
            printf("  ");
        }
        for(c=a;c<=10;c++)   // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}