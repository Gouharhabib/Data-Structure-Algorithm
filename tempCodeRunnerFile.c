// #include<stdio.h>
// int main(){
//     int i, n, m, loc, temp;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter value in array: ");
//     for (I = 0; i < n; ++i){
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n; ++i){
//         m = a[i];
//         loc = i + 1;
//         for (j = i + 1; j < n; j++){
//             if (m > a[j]){
//                 m = a[j];
//                 loc = j;
//             }
//         }
//         if (a[loc] < a[i]){
//             temp = a[loc];
//             a[loc] = a[i];
//             a[i] = temp;
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int i, j, n, loc, temp;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter values in array: ");
    for (i = 0; i < n; ++i) { // Corrected loop variable 'I' to 'i'
        scanf("%d", &a[i]);
    }
    // Selection Sort Algorithm
    for (i = 0; i < n - 1; ++i) { // Loop till n-1 because last element will be automatically sorted
        loc = i; // Initially, loc is set to the current index 'i'
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[loc]) { // Find the minimum element in the remaining unsorted array
                loc = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        if (loc != i) {
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
