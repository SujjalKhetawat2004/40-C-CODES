//Program to copy one string to another string
#include<stdio.h>
#include<string.h>

int main(){
    char a[20], b[20];
    int i;
    printf("Enter a string: ");
    scanf("%s", a);
    strcpy(b, a);
    printf("Copied string: %s", b);
    return 0;
}