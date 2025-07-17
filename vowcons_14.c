//Program to check whether a character is a vowel or a consonant
#include<stdio.h>

int main(){
    char x;
    printf("Enter a letter: ");
    scanf("%c", &x);
    if((x == 'a' || x == 'A') || (x == 'e' || x == 'E') || (x == 'i' || x == 'I') || (x == 'o' || x == 'O') || (x == 'u' || x == 'U')){
        printf("%c is a vowel", x);
    } else{
        printf("%c is a consonant", x);
    }
    return 0;
}