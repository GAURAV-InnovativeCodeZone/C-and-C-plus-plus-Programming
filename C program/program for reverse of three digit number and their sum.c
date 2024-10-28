// program for reverse of three digit number and their sum //

#include <stdio.h>
 int main()
{ 
   int num,rem,rev=0,sum=0;
   
   printf("Input the number : "); 
   scanf("%d",&num);
   
   while(num>0)
    {
     rem=num%10;
     rev=rev*10+rem;
     sum=sum+rem;
     num=num/10;
    }
  printf("\n Reverse of three digit number is %d \n",rev);
  printf("\n Sum of three digit number is %d \n",sum);
  
  return 0;
}

