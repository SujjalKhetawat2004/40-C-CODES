//Program to print the Fibonacci series up to N terms
#include<stdio.h>

int main(){
    int a = 0, b = 1, c, n;
    printf("Enter the desired number of terms: ");
    scanf("%d", &n);
    printf("The Fibonacci series: \n");
    printf("%d\n%d\n", a, b);
    for(int i = 2; i<n; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}