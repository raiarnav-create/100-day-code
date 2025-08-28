//Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main ()
{
   printf("Enter temperature in celcius : ");
   float c;
   scanf("%f", &c);
   float f=(c * (9/5))+32;
   printf("%f Farhenheit : ",f);
   return 0;
}
