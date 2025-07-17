//Program to reverse a given number
#include<stdio.h>

int main(){
    int a, reverse = 0, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a != 0){
        r = a % 10;
        reverse = reverse * 10 + r;
        a = a / 10;
    }
    printf("The reverse number is: %d", reverse);
    return 0;
}