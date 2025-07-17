//Program to print the sum of two numbers
#include<stdio.h>

int main(){
    int a, b, sum;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is: %d", sum);
    return 0;
}