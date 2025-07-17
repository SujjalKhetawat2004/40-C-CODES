//Program to find the largest element in an array
#include<stdio.h>

int main(){
    int arr[10], n, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The largest element is: %d", max);
    return 0;
}