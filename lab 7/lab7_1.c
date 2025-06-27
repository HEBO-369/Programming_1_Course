#include<stdio.h>
int main(){
int x,y,z ;
int *ptr1 , *ptr2 ;
ptr1 = &x ;
ptr2 = &y ;
scanf("%d%d",ptr1,ptr2);
z = *ptr1 + *ptr2 ;
printf("%d",z);
}
