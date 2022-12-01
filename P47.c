#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
    int t;
     t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int num1,num2;

    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1>1 && num1<=100){
        if(num2>1 &&num2<=80){
            swap(&num1,&num2);
            printf("First number is %d\nSecond number is %d",num1,num2);
        }
        else printf("Outside the range");
    }
    else printf("Outside the range");
    return 0;
}