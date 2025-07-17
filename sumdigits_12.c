//Program to print the sum of the digits of a number
#include<stdio.h>

int main(){
    int a, x, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a != 0){
        x = a % 10;
        sum += x;
        a = a / 10;
    }
    printf("The sum of the digits is: %d", sum);
    return 0;
}