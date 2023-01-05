
//Function for biggest between two numbers or three numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * biggest_of_two(int *n1, int *n2)

{

if( (*n1) < (*n2) ){ return( n2 ); }

else{ return( n1 ); }

return( NULL );

}

int * biggest_of_three(int *n1, int *n2, int * n3)
{
   if(*n1 > *n2 && *n1 > *n3){ return (n1);}

 else if(*n2 > *n3 && *n2 > *n3){return (n2);}
 else{ return (n3);}
 return (NULL);
}


int main()    
{
    int a, b, c;
    signed int * ptr=NULL;
    signed int * dtr=NULL;
    scanf("%d%d%d", &a, &b, &c);
    if (a>-100 && a<100){
        if (b>-100 && a<100){
            if (c>-100 && c<100){
              ptr = biggest_of_two( &a, &b );
              dtr = biggest_of_three(&a, &b, &c);
              printf("The biggest of %d and %d is %d\n", a, b, *ptr );
              printf("The biggest of %d, %d and %d is %d\n", a, b, c, *dtr );
              ptr=NULL;
              dtr = NULL;

              c = 0x0000;

              b = 0x0000;
              
              a = 0x0000;
              
              return(0x0000);
            }
            else printf("Outside the range");
        }
        else printf("Outside the range");
    }
    else printf("Outside the range");
    return 0;    
}