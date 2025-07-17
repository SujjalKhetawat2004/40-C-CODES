//Program to find the length of a string(without using library functions)
#include<stdio.h>

int main(){
    char str[20];
    int i = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0'){
        i++;
    }
    printf("The length of the string is: %d", i);
    return 0;
}