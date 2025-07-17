//Program to implement a simple calculator using switch-case
#include<stdio.h>

int main(){
    int a, b, x;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Please enter your choice of operation: \n");
    scanf("%d", &x);
    switch(x){
        case 1: 
        printf("Sum: %d", a + b);
        break;
        case 2: 
        printf("Difference: %d", a - b);
        break;
        case 3:
        printf("Prtoduct: %d", a * b);
        break;
        case 4:
        printf("Quotient: %d", a / b);
        break;
        default:
        printf("Invalid input!");
    }
    return 0;
}