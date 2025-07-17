//Program to swap two numbers using a temporary variable
#include<stdio.h>

int main(){
    int a, b, temp;
    printf("Enter 1st value: ");
    scanf("%d", &a);
    printf("Enter 2nd value: ");
    scanf("%d", &b);
    printf("The values before swapping are: %d and %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("The values after swapping are: %d and %d", a, b);
    return 0;
}