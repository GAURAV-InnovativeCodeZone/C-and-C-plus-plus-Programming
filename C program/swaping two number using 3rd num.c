		//swaping two number using third number 


#include <stdio.h>
int main()
{ int a,b,c;
	printf("******swaping two number using third number******");
	printf("Enter two number a & b.\n\ta:");
	scanf("%d",&a);
	printf("\tb:",&b);
	scanf("%d",&b);
	
	printf("\nBefore swaping\ta=%d & b=%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\nAfter swaping\ta=%d & b=%d",a,b);
	
	return 0;
}
