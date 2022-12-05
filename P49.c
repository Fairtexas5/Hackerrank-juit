#include <stdio.h>

void div_rem(int n1, int n2, int *div, int *rem)
{
    *div = n1 / n2;
    *rem = n1 % n2;
} 

int main(void)
{
  int a, b;
  int div = 0;
  int rem = 0;
  scanf("%i%i", &a, &b);
  if (a>0 && a<100){
    if (b>0 && b<100){
        div_rem(a, b, &div, &rem);
        printf("%i divided by %i = %i and remainder is %i\n", a, b, div, rem);
    }
    else
    printf("Ouside the range");
  }
  else printf("Oustside the range");
  return 0;
}