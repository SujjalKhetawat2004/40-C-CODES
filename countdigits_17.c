//Program to count the digits in an integer
#include<stdio.h>

int main(){
    int x, count = 0; 
    printf("Enter an integer: ");
    scanf("%d", &x);
    if(x == 0){
        count = 1;
    } else{
        if(x < 0){
            x = -x;
        } 
    while(x != 0){
        x /= 10;
        count++;
    }
}
    printf("The total number of digits in the integer are: %d", count);
    return 0;
}