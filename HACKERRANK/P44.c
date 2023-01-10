
//Factorial of a number using Recursion

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double factorial(int num)
{
    int fact;
    if (num == 1 || num == 0){
        return(1);
    }
    else {
        fact = num * factorial(num-1);
        return (fact);
    }
}

int main()
{
  
    int number;
    scanf("%d", &number);

    if (number >= 0 && number <= 500){
    printf("Factorial of %d = %g\n", number, factorial(number));
    }
    
    else if (number>500)
        printf("Outside the range");

    else
    printf("Error! Factorial of a negative number doesn't exist.");
    
    
    return 0;
}