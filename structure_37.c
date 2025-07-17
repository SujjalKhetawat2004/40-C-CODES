//Program to implement a structure for storing student information and display it
#include <stdio.h>

struct student{
    int roll;
    char name[50];
    char gender[10];
};

int main(){
    struct student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter name: ");
    scanf(" %s", s.name);
    printf("Enter gender: ");
    scanf("%s", s.gender);
    printf("Student Information\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Gender: %s\n", s.gender);
    return 0;
}
