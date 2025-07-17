//Program to find the GCD(HCF) and LCM  of two numbers
#include<stdio.h>

int main(){
    int a, b, x, y, gcd, lcm, temp;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    x = a;
    y = b;
    while(y != 0){
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a * b)/ gcd;
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}