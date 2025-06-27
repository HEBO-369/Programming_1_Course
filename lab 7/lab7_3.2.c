#include<stdio.h>
#include<stdlib.h>
int main(){
int n , *ptr , sum ;sum = 0 ;
printf("enter the number of element :");
scanf("%d",&n);
ptr = calloc(n,sizeof(int)) ;
printf("enter the elements :");
for(int i=0 ; i<n ; i++){
scanf("%d",(ptr+i));
sum += *(ptr+i) ;
}
printf("%d",sum);
free(ptr);
}
