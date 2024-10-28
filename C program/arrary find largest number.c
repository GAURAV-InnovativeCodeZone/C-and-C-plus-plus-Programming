#include <stdio.h>

int main ()
{ int a [5]={2,5,7,8,6},i,large;

printf ( " the largest element of array \n");
large = a[0];
for ( i=0;i<5;i++)

{ 
if (a[i]>large)
{
	large=a[i];
	
}
}
printf ("%d\n",large);
return 0;
}
