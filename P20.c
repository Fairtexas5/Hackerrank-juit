// WITHOUT LOOP
#include <stdio.h>
#include <string.h>
#include <math.h>

int main ()
{
  int n,num,a,b,c,d,reverse,d1,d2,d3,d4,d5;;
  scanf ("%d", &num);

  if (num > 99999)
    printf ("Outside the range.");

  if (num < 10000)
    printf ("Outside the range.");

  else if (num >= 10000 && num <= 99999)
    {
      n = num;{
     a=num/10;
     d5=num%10;

     b=a/10;
     d4=a%10;

     c=b/10;
     d3=b%10;

     d=c/10;
     d2=c%10;

     d1=d%10;

     reverse=d5*10000 + d4*1000 + d3*100 + d2*10 + d1*1;
    }
      printf ("%05d\n", reverse);

      if (n == reverse)
    printf ("Same");
      else
    printf ("Different");
    }

  return 0;
}




//WITH LOOP
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() 
{
    int num, n, reverse=0;
    scanf("%d",&num);
    
    if (num>99999)
        printf("Outside the range.");
    
    if (num<10000)
        printf("Outside the range.");
    
    else if (num>=10000 && num<=99999)
    {
    n = num;
    while(num!=0)
    {
        reverse = reverse * 10;

        reverse = num % 10 + reverse;

        num = num/10;
    }
    printf("%05d\n", reverse);

    if (n==reverse)
        printf("Same");
    else
        printf("Different");
    }

   return 0;
}