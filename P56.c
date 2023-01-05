
//Write a program in C program to Concatenate Two Strings without using strcat().

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char s1[100],s2[100];
    int i=0,j=0;
    scanf("%[^\n]%*c", s1);
    scanf("%[^\n]%*c", s2);
    while(s1[i]!='\0')
    i++;
    while(s2[j]!='\0'){
     s1[i]=s2[j];
     j++;
     i++;
   }
    s1[i]='\0';
    printf("%s",s1);
}