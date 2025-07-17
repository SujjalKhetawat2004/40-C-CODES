//Program to convert Celsius to Fahrenheit
#include<stdio.h>

int main(){
    float c, f ;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The same temperature in Fahrenheit is: %f", f);
    return 0;
}