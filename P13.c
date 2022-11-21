#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    double x,y,temp;
    scanf("%lf%lf",&x,&y);
 
    temp = x;
    x = y;
    y = temp;
 
    printf("%g",x);
    printf(" %g",y);
    return 0;
}