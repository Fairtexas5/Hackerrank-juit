
//Write a program in C to find largest element in the array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  double arr[100];
  scanf("%d", &n);
  if(n>=1 && n<=100){
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &arr[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (arr[0] < arr[i]) {
          arr[0] = arr[i];
        }
    }

    printf("Largest element = %.2lf", arr[0]);
  }
  else printf("Error! number should in range of (1 to 100).");
  return 0;
}