	//ARMSTRONG NUMBER 

#include <stdio.h>
int main ()
{
int n,a,b,c;
printf("PROGRAM FOR CHECKING ARMSTRONG NUMBER NUMBERS \n\nEnter a three digit numbers :");
scanf("%d",&n);
int n1=n;

a=n%10;
n=n/10;
b=n%10;
c=n/10;

int arm=a*a*a+b*b*b+c*c*c;

if(n1==arm)
{
	printf("\n%d is a armstrong number.",n1);
}
else{
	printf("\n%d is not a armstrong number.",n1);
}

return 0;
}
