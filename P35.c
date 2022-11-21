#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int x, y, rows, num = 1;
    scanf("%d", &rows);
    if (rows>=1 && rows<=10){
        for (x = 1; x <= rows; ++x) {
            for (y = 1; y <= x; ++y) {
                printf("%d ",num);
            }
            ++num;
            printf("\n");
        }
    }
    else printf("Outside the range");
   return 0;
}