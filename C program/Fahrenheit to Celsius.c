  //  Write a program converts the given temperature in Fahrenheit to Celsius using preprocessor. //
 
 #include <stdio.h>
  
int main()
{
    float celsius, fahrenheit;
  
    printf(" Enter temperature in Celsius: :- ");
    scanf("%f", &celsius);
  
    
    fahrenheit = (celsius * 9/5) + 32;
    
    
    printf(  "%f is fahrenheit ", fahrenheit);
  
    return 0;
}
