//Program to read and write data to a file
#include <stdio.h>

int main(){
    char filename[] = "data.txt";
    char text[100];
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text: ");
    scanf("%s", text);
    fprintf(file, "%s", text);
    fclose(file);
    file = fopen(filename, "r");
    if (file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("\nFile contents:\n");
    fscanf(file, "%99s", text);
    printf("%s\n", text);
    fclose(file);
    return 0;
}