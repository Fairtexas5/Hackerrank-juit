#include <stdio.h>

int main(void)
{
    int i;
    long ix;
    short s;
    unsigned u;
    float x;
    double dx;
    char c;
    
    scanf("%d\n",&i);
    scanf("%ld\n",&ix);
    scanf("%hd\n",&s);
    scanf("%u\n",&u);
    scanf("%f\n",&x);
    scanf("%lf\n",&dx);
    scanf("%c\n",&c);
    
    printf("%d\n%ld\n%hd\n%u\n%.4f\n%.10lf\n%c",i,ix,s,u,x,dx,c);

    return 0;
}