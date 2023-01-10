#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  y, i;
    float x, sum;
    scanf("%d", &y);
    if(y>=1 && y<=10){
        for (i=1; i<=y; i++){
            for (x=5.50; x<=7.50; x=x+0.5){
                sum = 2 + (i + 0.5*x);
                printf ("y=%d, x=%.2f and i=%.2f\n", i, x, sum);
            }
        }
    }
    else printf("Outside the range");
    return 0;
}