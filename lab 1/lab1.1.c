#include<stdio.h>
int main(){
float radius ,diameter,circumference ,area ;
const float X = 3.14159;
char process1 ;
printf("inter the radius:");
scanf("%f",&radius);
printf("what wanted to be calculated ?\nD-Diameter\nC-Circumference\nA-Area\nZ-all of the above\n");
scanf(" %c",&process1);
diameter = radius*2 ;
circumference = radius*2* X ;
area = radius*radius*X ;

if (process1 =='D'||process1=='d'){
        printf("the diameter is : %f\n",diameter);}
else if (process1=='A'||process1=='a'){
    printf("the Area is :%f\n",area);}
else if (process1=='C'||process1=='c'){
    printf("the circumference is :%f\n",circumference);}
else if (process1=='Z'||process1=='z'){
    printf("the diameter is :%f\nthe circumference is :%f\nthe Area is :%f\n",diameter,circumference,area);}
else {
    printf("invalid input.");
}

return 0;
}
