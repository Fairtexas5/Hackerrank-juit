#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{  
 
    int x, space, rows, y = 0, n=1;  
    scanf ("%d", &rows); 
    
    if (rows>=1 && rows<=10){
    for ( x =1; x <= rows; x++)  
    {
        for ( space = 1; space <= rows - x; space++)  
        {  
            printf (" "); 
        }  
        for ( y = 1; y <=x; y++)  
        {  
            printf ("%d ",n);
            n++;
        }  
        printf ("\n");  
    }
    }
    else printf("Outside the range");
    return 0;  
}