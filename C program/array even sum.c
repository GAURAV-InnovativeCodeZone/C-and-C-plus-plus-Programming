#include <stdio.h>

 
int main()
{
    int a [5]= {2,6,8,7,9,},i,sum=0;
    
    printf ( " the sum of even array elements ' \n");
    
    for (i=0;i<5;i++)
    
    {
	if (a[i]%2==0)
    {
    	sum=sum+a[i];
	}
	}
    printf ("%d /n ", sum);
    return 0;
}
