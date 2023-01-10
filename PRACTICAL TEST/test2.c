#include<stdio.h>

int main()  
{  
    char s1[20]; // declaration of char array variable  
    char s2[20]; // declaration of char array variable  
    int i, n=3;  // integer variable declaration  
    printf("Enter integer: ");
    scanf("%d",&n);
    printf("Enter the first string ");
    scanf("%s",s1);  
    printf("\nEnter the second string ");  
    scanf("%s",s2);  
    for(i=0;s1[i]!=s1[n+1];i++);   
    for(int j=0;s2[j]!='\0';j++)  
    {  
        
        s1[i]=s2[j];  
        i++;  
    }  
    s1[i]='\0';  
   printf("After concatenation, the string would look like: %s", s1);  
return 0;
}