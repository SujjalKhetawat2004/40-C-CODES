//Program to merge two files into a third file
#include <stdio.h>

int main(){
    FILE *file1, *file2, *mergedFile;
    char ch;
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(file1);
        return 1;
    }
    mergedFile = fopen("merged.txt", "w");
    if (mergedFile == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }
    printf("Files merged successfully into merged.txt\n");
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);
    return 0;
}