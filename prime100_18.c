//Program to print all prime numbers between 1 and 100
#include<stdio.h>

int main(){
    int isPrime;
    printf("All prime numbers between 1 and 100 are: \n");
    for(int i = 2; i < 100; i++){
        isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d\n", i);
        }
    }
    return 0;
}