#include <stdio.h>

int main()
{
    long int bas;
    float da, hra, gross;
    
    scanf("%li", &bas);
    
    da= bas*0.4;
    
    hra= bas*0.2;
    
    gross = bas + da + hra;
    printf("%g", gross);
    
    return 0;
}