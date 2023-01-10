#include <stdio.h>

int main()
{
    int a;
    float b, division;
    scanf("%d\n", &a);
    scanf("%f\n", &b);

    division = a / b;

    printf("%.3f\n", division);
    return 0;
}