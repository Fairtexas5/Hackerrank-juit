#include <stdio.h>
int main() {
char health,living, gender;
int age;
double amt;
scanf("%c", &health);
scanf("%d\n", &age);
scanf("%c\n",&living);
scanf("%c\n",&gender);
scanf("%lf", &amt);
char male='M';
char fem='F';
char city='C';
char vill='V';
char excel='E';
char poor='P';
if (age>=25 && age<=35){
if (gender ==male ){
if (living==city){
if (health==excel){
if (amt>200000){
printf("Policy amount exceed limit.");
}
else{
double insam=4*(amt/1000);
printf("%lf",insam);
}
}
else if (health==poor){printf("You can not be insured.");
}
else{printf("Input unspecified.");}
}
else if(living==vill){
if (health==poor){
if (amt>10000){
printf("Policy amount exceed the limit.");
}
else {
double insam= 6*(amt/1000);
printf("%lf", insam);
}
}else if (health==excel){printf("You can not be insured.");}
else{printf("Input unspecified.");}
}
else{ printf("Input unspecified.");}
}
else if(gender==fem){
if (health==excel && living==city){
if (amt<=100000){
double insam=3*(amt/1000);
printf("%lf",insam);}
else {printf("Policy amount exceed the limit.");}
}
else if(health==poor || living==vill ){printf("You can not be insured.");}
}
else {printf("Input unspecified.");}
}
else printf("You can not be insured.");

return 0;}