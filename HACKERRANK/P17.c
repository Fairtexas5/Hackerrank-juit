#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
  int num;
  scanf("%d", &num);
  
  if(num %2 == 0)
  printf("%d is even.", num);
  else
  printf("%d is odd.", num);

  return 0;
}
