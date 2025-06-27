#include<stdio.h>
int main(){
int n ;
printf("enter the number of element :");
scanf("%d",&n);
int arr[n];
int *ptr = arr ;
printf("enter the elements :");
for(int i=0 ; i<n ; i++){
scanf("%d",(ptr+i));
}
for(int i = 0; i < n ; i ++){
printf("%d", *(ptr+i));

}
}
