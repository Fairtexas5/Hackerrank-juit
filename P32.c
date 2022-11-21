#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a , count=0;
    scanf("%d", &a);
    if (a>=1 && a<=99999){
        do {
            a /= 10;
            ++count;
        } while (a != 0);
        printf("Number of digits: %d", count);
    }
    else printf("Outside the range");
    return 0;
}
