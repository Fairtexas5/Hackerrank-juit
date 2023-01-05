
//Write a program in C to Access Array Elements Using Pointer.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=&arr[n];
    if(1<=n&&n<=10){
        for(int i=0;i<n;i++){
            scanf("%d",p+i);
        }
        int count =0;
        for(int i=0;i<n;i++){
            count++;
            printf("%d\n",*(p+i));
        }
    }
    else
    printf("Error! number should in range of (1 to 100).\n");

return 0;
}