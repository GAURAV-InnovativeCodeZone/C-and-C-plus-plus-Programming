  // program for sum,sub,mul,div

#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;

    printf(" Enter the value of a : ");
    scanf("%d",&a);
    printf(" Enter the value of b : ");
    scanf("%d",&b);
    
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    
    printf("sum of a+b is %d \n",sum);
    printf("sub of a-b is %d \n",sub);
    printf("mul of a*b is %d \n",mul);
    printf("div of a/b is %d \n",div);

    return 0;
}