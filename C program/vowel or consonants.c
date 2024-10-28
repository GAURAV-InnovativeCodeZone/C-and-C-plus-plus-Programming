		//vowel or not 


#include <stdio.h>
int main()
{ char ch;
	printf("\tPogram to check vowel and consonant\n\n");
	printf("Enter a character :");
	scanf("%c",&ch);
	
	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n it is a vowel.");
	}
	else
	{
		printf("\n %c is not a consonant.",'ch');
	}
	
	return 0;
}
