#include <stdio.h>

int main() {
    int A, B;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);
    printf("Before swapping: A = %d, B = %d\n", A, B);
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;
    printf("After swapping: A = %d, B = %d\n", A, B);

    return 0;
}