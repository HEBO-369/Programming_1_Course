#include<stdio.h>
#include<stdlib.h>
void sortbysum(int n,int m , int **arr)
{
int max = 0 ;
int max_row =0 ;
for (int i = 0 ; i < n ; i++){
int sum = 0;
for (int j = 0 ; j<m ; j++){
sum += arr[i][j];
}
if(sum > max){
max = sum ;
max_row = i ;
}
}
if(max_row != 0 ){
for (int j = 0 ; j < m ; j++){
int temp = arr[0][j];
arr[0][j]=arr[max_row][j];
arr[max_row][j]= temp ;
}}
}
int main(){
int n,m;
printf("enter the  number of rows:");
scanf("%d",&n);
printf("enter the  number of columes:");
scanf("%d",&m);
int **arr = malloc(n*sizeof(int)) ;
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(m * sizeof(int));
    }
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
scanf("%d" , &arr[i][j]);
}
}
sortbysum(n,m,arr);
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
printf("%d ",arr[i][j]);
}
printf("\n");
}
}
