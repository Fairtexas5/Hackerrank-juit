#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Compar(int *a, unsigned int n){
    int l1, l2, i;
    l1 = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > l1) {
            l1 = a[i];
        }
    }
    l2 = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > l2 && a[i] < l1)
            l2 = a[i];
    }
    printf("Second largest number : %d", l2);
}
 
int main()
{
   int a[10], n, i;
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
         scanf("%d", &a[i]);
    }
   Compar(a, n);
   return 0;
}