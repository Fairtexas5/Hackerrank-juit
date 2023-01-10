#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int table, num, n;
    scanf("%d\n",&num);
    scanf("%d\n",&n);
    if(num>=1 && num<=20){
        for (int i=1; i<=n;++i){
        table = num *i;
        printf("%d * %d = %d\n", num, i, table);
        }
    }
    else printf("Outside the range");
    return 0;
}
