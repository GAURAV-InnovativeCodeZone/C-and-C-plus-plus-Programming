	//greatest among three numbers 


#include <stdio.h>
int main()
{
	int a,b,c;
printf("PROGRAM TO FIND GREATEST AMONG THREE NUMBERS.\nEnter three numbers :\n");
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d",&c);

if(a>b && a>c)
{
	printf("%d is a greatest.",a);
}

else if (b>a && b>c)
{
	printf("%d is a greatest.",b);
}
else
{
	printf("%d is not a enen number.",c);
	}	
	
	return 0;
}
