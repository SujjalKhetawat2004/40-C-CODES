//Program to check whether a year is a leap year or not
#include<stdio.h>

int main(){
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if(a % 4 == 0){
        printf("%d is a leap year", a);
    } else{
        printf("%d is not a leap year" ,a);
    }
    return 0;
}