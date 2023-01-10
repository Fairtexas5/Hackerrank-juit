
//Write a program in C which calculates average of number stored in arrays. User will enter number of elements and then enter elements to calculate the average.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{  
    int n, i;  
    float a[100], sum = 0,avg;  
    scanf("%d", &n);
    if(n>=1 && n<=100){
    for(i = 0; i < n; i++)  
    {  
        scanf("%f", &a[i]);  
        sum = sum + a[i];  
    }  
  
    avg = sum / (float)n;  
   
    printf("\nAverage = %.2f\n",avg);  
    }
    else printf("Error! number should in range of (1 to 100).");
    return 0;  
}