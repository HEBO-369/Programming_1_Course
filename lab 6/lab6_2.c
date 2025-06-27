#include <stdio.h>

void shift(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    printf("Enter size of array (n) and shifts (k): ");
    scanf("%d %d", &n, &k);
    if( k < 0 || n < 0 ){
    	printf("enter a positive num"); return 1 ;}

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    shift(arr, n, k);
    printf("Shifted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
