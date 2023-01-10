#include <stdio.h>
int main()
{
    double area, PI=3.1415926535, r;
    
    scanf("%lf", &r);
    
    
    area =PI*r*r;
    
    printf("%.10lf",area);

    return 0;
}