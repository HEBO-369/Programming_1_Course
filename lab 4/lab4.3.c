#include<stdio.h>
int prime(int n ){
		if ( n <= 1 ){
			printf("is not prime .") ;
			return 1 ;
		}
		int x = 0 ;	
	for (int i = 2 ; i < n ; i++){
	if ( n % i == 0){
		x = 1 ;
		break ;
	}	
}
if (x == 0){
	printf("is prime.");
}
else {
	printf("is not prime.");
}
}
int main(){
	int num ;
	printf("enter an integer number : ");
	scanf("%d",&num);
	prime(num);
	return 0 ;
}