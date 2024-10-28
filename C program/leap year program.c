// print leap year 


#include <stdio.h>
int main()
{
	int y;
printf("PROGRAM TO CHECK WHEATHER A YEAR IS LEAP OR NOT.\nEnter the number :");
scanf("%d",&y);

if(y%4==0)
{
	printf("%d is a leap year.",y);
}
else
{
	printf("%d is not a leap year.",y);
	}	
	return 0;
}
