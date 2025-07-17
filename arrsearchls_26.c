//Program to search an element in an array using linear search
#include <stdio.h>

int main(){
    int arr[10], n, i, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("Element not found in the array\n");
    }
    return 0;
}