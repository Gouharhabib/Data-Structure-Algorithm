#include<stdio.h>
int Square (int n){
    printf("%d Bytes\n",sizeof(int));
    printf("%d Bytes\n",sizeof(n));
    return n*n;
}

main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",& num);
    int value = Square(num);
    printf("%d",value);
}

