//Program to print the multiplication table of a given number
#include<stdio.h>

int main(){
    int a , i;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The multiplication table: \n");
    for(i = 1; i <= 10; i++){
    printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}