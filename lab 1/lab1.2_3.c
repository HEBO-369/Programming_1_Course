#include <stdio.h>
#include <math.h>
int main () {
float a , b , c , d , e , f , g , M ;
printf("inter a :");
scanf("%f",&a);
printf("inter b :");
scanf("%f",&b);
printf("inter c :");
scanf("%f",&c);
printf("inter d :");
scanf("%f",&d);
printf("inter e :");
scanf("%f",&e);
printf("inter f :");
scanf("%f",&f);
printf("inter g :");
scanf("%f",&g);
M = ((a + (b/c))/(d + (e/(f+g)))) ;
printf ("the answer is : %f",M);
return 0 ;
}
