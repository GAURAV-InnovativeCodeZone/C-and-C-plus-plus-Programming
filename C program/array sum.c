#include <stdio.h>

int main()
{
   int number [10] = {2,5,2,5,2,5,2,5,2,5};
   int sum, i ;

   sum = 0;
   
   for( i= 0;  i<10; i++)
   {
      sum = sum + number[i];      
   }

   printf("Sum of array is =  %d", sum);   

   return 0;
}






