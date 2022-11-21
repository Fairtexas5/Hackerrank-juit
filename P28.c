#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a, sum=0;
scanf("%d",&a);
if (a>500 || (a<1 && a>=0))
    printf("Outside the range");
else if (a<0){
    while (a<0){
        scanf("%d",&a);
    }
    for (int i=1; i<=a; i++){

        sum=sum+i;
    }
    printf("Sum = %d",sum);
}
    else {
        for (int i=1; i<=a; i++){
            sum=sum+i;
        }
        printf("Sum = %d",sum);
    }
    return 0;
}
