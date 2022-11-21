#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;

    scanf("%d\n%d",&a,&b);

    if((a ^ b) == 0)
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
