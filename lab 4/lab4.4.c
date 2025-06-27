#include <stdio.h>
#include <math.h>
double computePolynomial( double x) {
    
  double  y =  3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
  return y ;
}

int main() {
    double x, result;
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    result = computePolynomial(x);

    printf("The value of the polynomial is: %lf\n", result);

    return 0;
}