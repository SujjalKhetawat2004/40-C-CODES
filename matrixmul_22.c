//Program to perform matrix multiplication
#include <stdio.h>

int main(){
    int a[10][10], b[10][10], result[10][10];
    int i, j, k;
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2){
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            result[i][j] = 0;
        }
    }
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            for(k = 0; k < c1; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix after Multiplication:\n");
    for(i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}