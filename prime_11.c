//Program to check whether a number is prime or not
#include<stdio.h>

int main(){
    int a, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a <= 1){
        isPrime = 0;
    } else{
        for(int i = 2; i <= a-1; i++){
            if(a % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 1){
        printf("%d is a prime number", a);
    } else{
        printf("%d is not a prime number", a);
    }
    return 0;
}