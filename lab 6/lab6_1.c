#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int numerator;
    int denominator;
} Fraction;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
Fraction reduceFraction(Fraction f) {
    int gcdValue = gcd(f.numerator, f.denominator);
    f.numerator /= gcdValue;
    f.denominator /= gcdValue;
    if (f.denominator < 0) {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
    return f;
}
Fraction add(Fraction num1, Fraction num2) {
    Fraction result;
    result.numerator = num1.numerator * num2.denominator + num2.numerator * num1.denominator;
    result.denominator = num1.denominator * num2.denominator;
    return reduceFraction(result);
}
Fraction subtract(Fraction num1, Fraction num2) {
    Fraction result;
    result.numerator = num1.numerator * num2.denominator - num2.numerator * num1.denominator;
    result.denominator = num1.denominator * num2.denominator;
    return reduceFraction(result);
}
Fraction multiply(Fraction num1, Fraction num2) {
    Fraction result;
    result.numerator = num1.numerator * num2.numerator;
    result.denominator = num1.denominator * num2.denominator;
    return reduceFraction(result);
}
Fraction divide(Fraction num1, Fraction num2) {
if (num2.numerator == 0 ){printf("can't be zero"); exit(0);}
    Fraction result;
    result.numerator = num1.numerator * num2.denominator;
    result.denominator = num1.denominator * num2.numerator;
    return reduceFraction(result);
}
int main()
{
    Fraction num1, num2, result;
   char op ;
    printf("Enter first fraction numerator :\n");
    scanf("%d", &num1.numerator);
     printf("Enter first fraction denominator:\n");
    scanf("%d", &num1.denominator );
    if (num1.denominator == 0 ){printf("can't be zero"); return 1 ;}
      printf("Enter second fraction numerator :\n");
    scanf("%d", &num2.numerator);
     printf("Enter second fraction denominator:\n");
    scanf("%d", &num2.denominator );
    if (num2.denominator == 0 ){printf("can't be zero"); return 1 ;}
    printf ("operator\n");
    scanf("\n%c", &op);

    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }
    printf("Result: %d/%d\n", result.numerator, result.denominator);
    return 0;
}
