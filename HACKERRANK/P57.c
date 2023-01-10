
//Write a program in C to Find the Frequency of a given Character in a String

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100], ch;
    int count = 0;

    scanf("%[^\n]%*c", s);
    scanf("%c", &ch);

    for (int i = 0; s[i] != '\0'; ++i) {
        if (ch == s[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}