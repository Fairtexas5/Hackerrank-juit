#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remain;
    scanf("%d", &dividend);
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remain = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remain);
    return 0;
} 
    
