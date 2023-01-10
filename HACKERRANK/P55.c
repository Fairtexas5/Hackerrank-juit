
//Write a program in C to calculate Length of String without Using strlen() Function.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    int length = 0;
    scanf("%999[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++){
        length++;
    }
    printf ("Length of the string: %d", length);
    return 0;
}