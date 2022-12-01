#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0, num, res, n, flag=0, i;
    while(1)
    {
       //print("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");
        scanf("%d", &a);
        if (a>=1 && a<=50){

        switch(a)
        {
            //Factorial 
            case 1:
                scanf("%d", &num);
                if (num>=1 && num<=50){
                    n=num;
                res=num;
                while(num>1)
                {
                    res = res*(num-1);
                    num = num-1;
                }
                printf("Factorial value is %d\n",res);
                break;
                }
                else printf("Outside the range\n");
                break;

            //prime
            case 2:

                scanf("%d", &num);
                if (num>=1 && num<=50){
                n=num;
                for(i=2;i<=n/2;i++)
                {
                    if(num%i==0)
                    {
                        flag=1;
                        break;
                    }
                }

                //Prime
                        if(flag==0)
                            printf("Prime number\n");
                        else
                            printf("Not prime\n");
                break;
                }
                else printf("Outside the range\n");
                break;

            //Odd||Even
            case 3:
                scanf("%d", &num);
                if (num>=1 && num<=50){
                    n=num;
                if(num%2==0)
                    printf("Even\n");
                else
                    printf("Odd\n");
                break;
                }
                else printf("Outside the range\n");
                break;

            case 4:
                exit(0);
                break;
        }
    }
        else printf("Outside the range\n");
    }
}