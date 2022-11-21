#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, gcd;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a>=-1000 && a<=1000){
        if (b>=-1000 && b<=1000){
            a=abs(a);
            b=abs(b);
            for(int i=1; i <= a && i <= b; ++i)
            {
                if(a%i==0 && b%i==0){
                    gcd = i;
                }
            }
                printf("GCD = %d",gcd);
                
        }
        else printf("Outside the range");
    }
    else printf("Outside the range");
    return 0;
}