		// week days 


#include <stdio.h>
int main()
{	int day;
	printf("Enter a day number (1-7) :");
	scanf("%d",&day);
	
	switch (day)
	{
	case 1: printf("\n1 is sunday.");
			break;
	case 2: printf("\n2 is monday.");
			break;
	case 3: printf("\n3 is tuesday.");
			break;
	case 4: printf("\n4 is wednesday.");
			break;
	case 5: printf("\n5 is thursday.");
			break;
	case 6: printf("\n6 is friday.");
			break;
	case 7: printf("\n7 is saterday.");
			break;
	default: printf("\nenter a number between 1-7.");
			break;
	}
	
	
	
	return 0;
}
