#include<stdio.h>
int Sum(int a[], int n){
    int i,s=0;
    printf("Array size %d Bydes\n ",sizeof(a)*n);    // Array:- 4*4=16Bytes + 16Bytes

    printf("%dBytes\n",sizeof(int));
    printf("%dBytes\n",sizeof(n));
    printf("%dBytes\n",sizeof(i));
    printf("%dBytes\n",sizeof(s));

    for(i=0; i<n; ++i){
        s=s*a[i];
    }
    return s;
}
main(){
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);     //size = 4
    int arr[size];    //arr[4]
    for(int i=0; i<size; ++i){
        scanf("%d",&arr[i]);
    }
}