// Find simple and compound interest //

#include<stdio.h>
#include<math.h>
 int main ()
{  float principal,time ,rate ,sim,com;

printf ( " enter a principal  = \n " );  // p= principal amount //
scanf (" %f " , &principal );

printf ( " enter a time  = \n  ");  // t = time in year  //
scanf ( " %f " , &time );

printf ( " enter a rate  = \n "); // r = rate in % //
scanf ( " %f " , &rate );

 sim= ( principal*time*rate )/100;
 com =  principal*( pow ((1+rate/100),time)) ;
 
 printf ( " simple interest  %f=  ",sim);
 printf ( " compound interest %f = ",com);
 
} 
