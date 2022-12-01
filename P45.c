#include <stdio.h>
#include <stdlib.h>
int hcf(int a, int b);
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
  	if(n1>=-1000 && n1<=1000 && n2>=-1000 && n2<=1000){
    int t =hcf(n1,n2);
        t = abs(t);
    printf("GCD = %d",t);
    }
  	else{
      printf("Outside the range");
    }
    return 0;
}

int hcf(int a, int b) {
    if (b != 0)
        return hcf(b, a % b);
    else
        return (a);
}