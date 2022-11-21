#include<stdio.h>
#include<math.h>
int main()
{
    long int num, pow, i;
    scanf("%ld", &num);
    scanf("%ld", &pow);
    i = 1;

    while(pow!=0)
    {
        i = i * num;
        pow = pow - 1;
    }
    printf("%ld",i);
}