//Program to print the largest of two numbers
#include<stdio.h>

 int main(){
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    if(a > b){
        printf("%d is largest", a); 
    } else{
        printf("%d is largest", b);
    }
    return 0;
 }