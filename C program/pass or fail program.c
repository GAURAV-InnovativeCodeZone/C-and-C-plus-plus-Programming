 // pass or fail program
 
 #include<stdio.h>
 int main()
 {
 	int marks;
 	printf(" Enter your marks : ");
 	scanf("%d", &marks);
 	
 	if (marks<33)
 	{
 		printf(" you are fail ");	
	}
	else if (marks<45)
	{
		printf(" you are third in the class ");
	}
	else if (marks<60)
	{
		printf(" you are second in the class ");
	}
	else
	{
		printf(" you are first in the class ");
	}
	return 0;
 }
