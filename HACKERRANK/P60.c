
//Write a C Program to Write a Sentence to a File and display it.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    char c[1000];
    FILE *fptr;
    fptr = fopen("program.txt", "w");

    if (fptr == NULL) {
        printf(" ");
        exit(1);
    }
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf(" ");
        exit(1);
    }
     fscanf(fptr, "%[^\n]", c);
    printf("%s", c);
    fclose(fptr);
    return 0;
}