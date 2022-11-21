#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    double a, b, c, disc, root1, root2, real, imag;
    scanf("%lf %lf %lf", &a, &b, &c);

    disc = b * b - 4 * a * c;


    if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    
    else if (disc == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", root1);
    }

    else {
        real = -b / (2 * a);
        imag = sqrt(-disc) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imag, real, imag);
    }
    
    return 0;
}