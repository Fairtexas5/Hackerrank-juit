

//Write a program in C Program to Add Two Distances (in in-ft system) using Structures

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

struct Distance {
   int ft;
   float in;
} d1, d2, ans;

int main() {

   scanf("%d%f%d%f", &d1.ft, &d1.in, &d2.ft, &d2.in);
   
   ans.ft = d1.ft + d2.ft;
   ans.in = d1.in + d2.in;

   while (ans.in >= 12.0) {
      ans.in = ans.in - 12.0;
      ++ans.ft;
   }
   printf("Sum of distances = %d\'-%.1f\"", ans.ft, ans.in);
   return 0;
}