

// Fibonnaci Using recursion

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int num;
    scanf("%d", &num);
    if (num>=1 && num<=15)
    printf("%d", fib(num));
    
    else printf("Outside the range");
    return 0;
}