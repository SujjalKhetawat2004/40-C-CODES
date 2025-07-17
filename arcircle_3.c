//Program to print the area of a circle with given radius
#include<stdio.h>

int main(){
    float r, area;
    printf("Enter the radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("The area of the circle is: %f", area);
    return 0;
}