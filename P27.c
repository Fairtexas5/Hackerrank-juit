#include <stdio.h>
int main() {
    int n, i;
    double fact = 1;
    scanf("%d", &n);


    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    if(n>=0 && n<=500) {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %g", n, fact);
    }
    
    else if(n>500)
    printf("Outside the range");

    return 0;
}