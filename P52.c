#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  scanf("%d", &r);
  scanf("%d", &c);

  if (r>=1 && r<=100){
    if (c>=1 && c<=100){
        for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
        for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            scanf("%d", &b[i][j]);
        }
    
        for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    
        printf("\nSum of two matrices:\n");
        for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }
    }
    else printf("Error! number should in range of (1 to 100).");
  }
  else printf("Error! number should in range of (1 to 100).");

  return 0;
}