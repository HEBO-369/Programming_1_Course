#include <stdio.h>
#include <math.h>
int main() {
float x , y , M ;
printf("inter x in degrea :");
scanf("%f",&x);
printf("inter y in degrea:");
scanf("%f",&y);
x = x* (3.1415926535/180);
y = y* (3.1415926535/180);
M = pow(sin( x + y ),2);
printf ("the answer is : %f",M);
return 0 ;}
