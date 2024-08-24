//*****DSA Searching*******
//                             Que...linear Search

// #include<stdio.h>             
// #include<stdlib.h>
// int main(){
//     int item, i=0;
//     int a[5] = {34,56,32,78,12};
//     printf("Enter Searching Item: ");
//     scanf("%d",&item);
//     while(i<5)
//     {
//         if(a[i] == item){
//             printf("Item Found at %d",i);
//             exit(0);
//         }
//         ++i;
//     }
//     if(i >= 5){
//         printf("Item Not Found");
//         exit(0);
//     }
//     return 0;
// }


//                             Que...Binary Search

#include<stdio.h>             
int main(){

    int a[5] = {10, 20, 30, 40, 50};    // Array size is more than declared
    int lr = 0, up = 4, min, item, f = 0;
    int mid;    // Declaration of mid was missing
    printf("Enter Searching Item: ");
    scanf("%d",&item);
    while(lr <= up)
    {
        mid = (lr + up) / 2;
        if (a[mid] == item){
            f=1; 
            break;
        }
        if (a[mid] < item){
            lr = mid + 1;
        }
        else{
            up = mid - 1;
        }
    }
    if(f == 1){
        printf("item Found at %d", mid);    // Placeholder for position was missing
    }
    else{
        printf("Item Not Found");
    }
    return 0;    // Added return statement for main
}




