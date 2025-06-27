#include <stdio.h>
#include <math.h>
int main() {
float x , z , y , M ;
printf("inter x :");
scanf("%f",&x);
printf("inter y :");
scanf("%f",&y);
printf("inter z :");
scanf("%f",&z);
M = 5 * pow(((x + y + 3)/(27 + z)),2);
printf ("the answer is : %f",M);
return 0 ;
}
