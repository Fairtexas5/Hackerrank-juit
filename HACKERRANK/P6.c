#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int  P, T;
    double R;
    float SI;
    
    scanf("%d%lf%d", &P, &R, &T);
    
    SI = (P * R * T)/100;
    
    printf("%.2f", SI);    
    return 0;
}