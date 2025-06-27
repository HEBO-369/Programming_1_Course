#include <stdio.h>
int removeDuplicates(int arr[], int n, int result[]) {
    int k = 0; 
    for (int i = 0; i < n; i++) {
        int not_Duplicate = 1;
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                not_Duplicate = 0 ;
                break;
            }
        }
        if (not_Duplicate) {
            result[k] = arr[i];
            k++;
        }
    }
    return k; 
}






int find_union(int arr1[], int size1, int arr2[], int size2, int union_arr[]) {
    int i, j, k = 0;
    for (i = 0; i < size1; i++) {
        union_arr[k++] = arr1[i];
    }
    for (i = 0; i < size2; i++) {
        int not_present = 1;
        for (j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                not_present = 0 ;
                break;
            }
        }
        if (not_present) {
            union_arr[k++] = arr2[i];
        }
    }
    return k;
}

int find_intersection(int arr1[], int size1, int arr2[], int size2, int intersection_arr[]) {
    int i, j, k = 0;

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection_arr[k] = arr1[i];
                k++ ;
           
    }
    }
    }

    return k;
}

int main() {
    int arr1[20], arr2[20], union_arr[40], intersection_arr[20], size1, size2, num_union, num_intersection, i;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    num_union = find_union(arr1, size1, arr2, size2, union_arr);
    num_intersection = find_intersection(arr1, size1, arr2, size2, intersection_arr);
 int union1[num_union] ;
 int intersection1[num_intersection] ;
 
  int  x = removeDuplicates( union_arr , num_union , union1) ;
int y = removeDuplicates(intersection_arr, num_intersection, intersection1 ) ;
    
    printf("Union: ");
    for (i = 0; i < x ; i++) {
        printf("%d ", union1[i]);
        
    }
    printf("\n");

    printf("Intersection: ");
    for (i = 0; i < y ; i++) {
        printf("%d ", intersection1[i]);
    }
    printf("\n");

    return 0;
}
