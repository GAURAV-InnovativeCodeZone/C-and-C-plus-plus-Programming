

#include <stdio.h>
int main ()
{
int n,a,c;
printf("PROGRAM FOR CHECKING palindrome NUMBERS \n\nEnter a three digit numbers :");
scanf("%d",&n);
int n1=n;

//3253

a=n%10; //a=3
n=n/10; //n=325
c=n/100; //c=
if(a==c)
{
	printf("\n%d is a palindrome number.",n1);
} 
else{
	printf("\n%d is not a palindrome number.",n1);
}

return 0;
}
