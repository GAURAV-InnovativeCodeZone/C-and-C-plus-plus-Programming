#include<stdio.h>
int main ()
{
int Numbers[4] = {5,10,15,20},i;

 
for ( i=0;i<4;i++)
{

 
    if (Numbers[i]%2==0)
{

  printf ( "%d\n" , Numbers[i] ) ;
}
}

return 0 ;
}

