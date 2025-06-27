#include <stdio.h>
#include <string.h>
void multiply(char x[], char y[]) {
    int n = strlen(x);
    int m = strlen(y);
    int result[n + m];
    for (int i = 0; i < n + m; i++) {
        result[i] = 0;
    }
    char x_rev[n + 1], y_rev[m + 1];
    for (int i = 0; i < n; i++) x_rev[i] = x[n - 1 - i];
    x_rev[n] = '\0';
    for (int i = 0; i < m; i++) y_rev[i] = y[m - 1 - i];
    y_rev[m] = '\0';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int prod = (x_rev[i] - '0') * (y_rev[j] - '0');
            result[i + j] += prod;
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }
    char result_str[n + m + 1];
    int k = 0;
    for (int i = n + m - 1; i >= 0; i--) {
        result_str[k++] = result[i] + '0';
    }
    result_str[k] = '\0';
    int start = 0;
    while (result_str[start] == '0' && start < k - 1) {
        start++;
    }
    printf("%s\n", &result_str[start]);
}
int ifint(char x[] ){
	 for(int i = 0 ; i < strlen(x);i++){
    	if(x[i] <48 || x[i] > 58){
    		printf("invalid number");
    		return 1 ;
    	}}
    	return 0 ;
    	}
int main() {
    int n, m;
    char x[1001], y[1001];
    printf("Enter the number of digits in x: ");
    scanf("%d", &n);
   if(n<=0|| n>1000){printf("not valid");return 1 ;}
    printf("Enter the first number x: ");
    scanf("%s", x);
    if(ifint(x))return 1 ;
    if(strlen(x)>n){printf("the number of digits is over the number you enterd");return 1 ;}
    printf("Enter the number of digits in y: ");
    scanf("%d", &m);
       if(m<=0|| m>1000){printf("not valid");return 1 ;}
    printf("Enter the second number y: ");
    scanf("%s", y);
    if(ifint(y))return 1 ;
    if(strlen(y)>m){printf("the number of digits is over the number you enterd");return 1 ;}
    printf("Result: ");
    multiply(x, y);

    return 0;
}
