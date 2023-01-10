
//Write a program in C Program to Store Information of a Student Using Structure

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct student {
    char Name[100];
    int roll;
    float marks;
}s;

int main() {

    scanf("%[^\n]%*c %d%f", s.Name, &s.roll, &s.marks);
    printf("Displaying Information:\n");

    printf("Name: %s\n", s.Name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f", s.marks);
    return 0;
}