// Multiplication table by Gaurav

#include<stdio.h>
int main()
{
int n,m,i;
printf(" Enter the starting table n : ");
scanf("%d",&n);
printf(" Enter the ending table m   : ");
scanf("%d",&m);
    
    for (n; n<=m; n++)
    {
        printf("\n Multiplication table of %d \n", n);
        for (i=1; i<=10; i++)
        printf("\n %dx%d = %d ", n,i,n*i);
    printf("\n");
    }
return 0;
}