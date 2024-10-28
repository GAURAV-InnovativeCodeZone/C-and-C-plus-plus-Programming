 //average of five number  

#include<stdio.h>

int main ()
{
float a,b,c,d,e,average;

printf( " enter 5 number = ");
scanf ( " %f%f%f%f%f", &a,&b,&c,&d,&e);

average = ( a+b+c+d+e )/5;

printf ( " Average of given number is %f = " , average );

return 0;
}
