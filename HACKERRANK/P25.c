#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{  
    int x1, y1, x2, y2, x3, y3, m, n;  
    
    scanf("%d,%d\n", &x1, &y1);  
    
    scanf("%d,%d\n", &x2, &y2);  
 
    scanf("%d,%d\n", &x3, &y3);  
  
    m = (y2 - y1) / (x2 - x1);  
    n = (y3 - y2) / (x3 - x2);  
  
    if( m == n)  
    {  
        printf("All 3 points lie on the same line\n");  
    }  
    else  
    {  
        printf("All 3 points do not lie on the same line\n");  
    }  
  
    return 0;  
} 
