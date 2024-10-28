//REVERSE OF THREE DIGIT NUMBER 

#include <stdio.h>
int main ()
{
    int n,a,b,c;
    printf("PROGRAM FOR REVERSE THREE DIGIT NUMBERS \n\nEnter a three digit numbers :");
    scanf("%d",&n);
    int n1=n;
    a=n%10;
    n=n/10;
    b=n%10;
    c=n/10;

    printf("\nreverse of %d is %d%d%d",n1,a,b,c);

return 0;
}
