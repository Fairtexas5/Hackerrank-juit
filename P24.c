#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n;
   scanf("%d", &n);
    
    if (n<1111)
        printf("Outside the range");
    
    else if (n>9999)
        printf("Outside the range");
    
    else if(n>=1111 && n<=9999){
        
    if (n % 400 == 0) {
       printf("%d is a leap year.", n);
    }
    
    else if (n % 100 == 0) {
       printf("%d is not a leap year.", n);
    }
   
    else if (n % 4 == 0) {
       printf("%d is a leap year.", n);
    }
   
    else {
       printf("%d is not a leap year.", n);
    }
    }   

    return 0;
}