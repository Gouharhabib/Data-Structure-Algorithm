//    DSA Sorting

//                      Que.....Bubble Sort
//1.......

// #include<stdio.h>
// int main(){
//     int i, n, j, temp;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter value in array: ");
//     for (i = 0; i < n; ++i){
//         scanf("%d",&a[i]);
//     }
//     for (i = n - 1; i > 0; i--){
//         for (j = 0; j < i; j++){
//             if (a[j] > a[j+1]){
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
//     printf("Sorted Result:\n");
//     for(i = 0; i < n; ++i){
//         printf("%d",a[i]);
//     }
//     return 0;
// }

//2.......

// #include<stdio.h>
// void selectionSort(int arr[], int n) {
//     int i, j, minIndex, temp;
//     for (i = 0; i < n - 1; i++) {
//         minIndex = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         if (minIndex != i) {
//             temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
// }
// int main() {
//     int i, n;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter elements of array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     selectionSort(arr, n);
//     printf("Sorted array: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }




//                         Que......Selection Sort

// #include<stdio.h>
// int main() {
//     int i, j, n, m, loc, temp;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter value in array: ");
//     for (i = 0; i < n; ++i) {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n - 1; ++i) {
//         m = a[i];
//         loc = i + 1;
//         for (j = i + 1; j < n; j++) {
//             if (m > a[j]) {
//                 m = a[j];
//                 loc = j;
//             }
//         }
//         if (a[loc] < a[i]) {
//             temp = a[loc];
//             a[loc] = a[i];
//             a[i] = temp;
//         }
//     }
//     printf("Sorted array: ");
//     for (i = 0; i < n; ++i) {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }




//                        Que.......Insertion Sort

// #include<stdio.h>
// int main() {
//     int i, n, j, temp;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter values in array: ");
//     for(i = 0; i < n; ++i) {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }    
//     printf("Sorted Result:\n");
//     for (i = 0; i < n; ++i) {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }




//                         Que.......Quick Sort

// #include<stdio.h>
// void quickSort (int a[], int low, int high){
//     if (low < high){
//         int pivot = a[high];
//         int i = low - 1, temp;
//         for (int j = low; j <= high - 1; j++){
//             if (a[j] < pivot){
//                 ++i;
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//         temp = a[i + 1];
//         a[i + 1] = a[high];
//         a[high] = temp;
//         quickSort (a, low, i);
//         quickSort (a, i + 1, high);    // recursive call
//     }
// }
// int main(){
//     int i, j, n, low, high, pivot, temp;
//     printf("Enter Array Size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter value in array:\n");
//     for (i = 0; i < n; ++i){
//         scanf("%d", &a[i]);
//     }
//     quickSort (a, 0, n - 1);
//     printf("Sorted Result:\n");
//     for (i = 0; i < n; ++i){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }




//                         Que........Merge Sort

#include <stdio.h>
void merge(int *arr, int *leftArray, int ls, int *rightArray, int rs) {
    int i = 0, j = 0, k = 0;
    while (i < ls && j < rs) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < ls) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < rs) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
void mergeSort(int *arr, int n) {
    if (n < 2)
        return;
    int ls = n / 2;
    int rs = n - ls;

    int leftArray[ls], rightArray[rs], i;

    for (i = 0; i < ls; i++)
        leftArray[i] = arr[i];
    for (i = ls; i < n; i++)
        rightArray[i - ls] = arr[i];

    mergeSort(leftArray, ls);
    mergeSort(rightArray, rs);
    merge(arr, leftArray, ls, rightArray, rs);
}

int main() {
    int i, size;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    int a[size];
    printf("Enter Array Values:\n");
    for (i = 0; i < size; ++i) {
        scanf("%d", &a[i]);
    }

    mergeSort(a, size);

    printf("Sorted Array:\n");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
