#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()

{
    int a;
    scanf("%d",&a);
    
    if (a>=5000)
        printf("Outside the range");
    
    if (a>=1000 && a<5000)
        printf("hugely positive");
    
    if(a>=100 && a<=999)
        printf("very positive");
    
    if (a>0 && a<100)
        printf("positive");
    
    if (a==0)
        printf("zero");
    
    if (a>-100 && a<0)
        printf("negative");

    if (a<=-100 && a>=-999)
        printf("very negative");
    
    if (a<=-1000 && a>-5000)
        printf("hugely negative");
        
    if (a<=-5000)
        printf("Outside the range");

    return 0;
}