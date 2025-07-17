//Program to count vowels, consonants, digits, and white spaces in a string
#include<stdio.h>

int main(){
    char str[20];
    int i, vow = 0, conso = 0, digit = 0, space = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++){
        char x = str[i];
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
           x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
            vow++;
        }
        else if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
            conso++;
        }
        else if(x >= '0' && x <= '9'){
            digit++;
        }
        else if(x == ' '){
            space++;
        }
    }
    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", conso);
    printf("Digits: %d\n", digit);
    printf("White spaces: %d\n", space);
    return 0;
}