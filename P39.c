#include <stdio.h>
//write function prototype here

int checkno(int n)
{
  int flag =0;
    if (n == 0 || n == 1)
    flag = 1;

  for (int i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
        return (flag);
  
}


int main()
{
  
    int number, f;
    scanf("%d", &number);

    if (number>=0&&number<=100){
    f = checkno(number);
    if (f == 0)
    printf("Prime");
  else
    printf("Not prime");
    }
    else printf("Outside the range");
    return 0;
}