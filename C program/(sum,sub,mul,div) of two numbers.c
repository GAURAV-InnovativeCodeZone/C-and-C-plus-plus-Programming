// (sum,sub,mul,div) of two numbers

#include <stdio.h>
int main()
{    
    int num1,num2;
    int sum,sub,mul,div;

    printf("\n Enter the first numbers  : ");
    scanf("%d", &num1);
    printf(" Enter the second numbers : ");
    scanf("%d", &num2);

    // calculate the (sum,sub,mul,div)
       div = num1 / num2;
       sum = num1 + num2;
       sub = num1 - num2;
       mul = num1 * num2;      
    
    printf("\n division of two number %d / %d = %d", num1, num2, div);
    printf("\n addition of two number %d + %d = %d", num1, num2, sum);
    printf("\n subtraction of two number %d - %d = %d", num1, num2, sub);
    printf("\n multiplication of two number %d * %d = %d", num1, num2, mul);

return 0;
}