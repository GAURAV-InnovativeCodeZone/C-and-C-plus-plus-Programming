// PROGRAM FOR EVEN OR ODD

#include<stdio.h>
int main()
{
	int n;
	printf("\n\n enter any number : ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\n %d is even : ",n);
	}
	else
	{
		printf("\n %d is odd : ",n);
	}
	return 0;
}