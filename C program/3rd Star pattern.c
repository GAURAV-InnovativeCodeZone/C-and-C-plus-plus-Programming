// 3rd Star pattern 

#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=10;a++)     // rows
    {
        for(b=a;b<10;b++)   // spaces
        {
            printf("  ");
        }
        for(c=1;c<=a;c++)    // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}