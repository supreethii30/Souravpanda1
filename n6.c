#include<stdio.h>
void main(){
    int N ,i, length;

    printf("Enter the Array size: ");
    scanf("%d",&N);

    int arr1[N];
    printf("Enter the elements into the array: ");
    for(i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }

    int arr2[N];

    for(i=0;i<N;i++){
        arr2[i]=arr1[i];
    }

    printf("Elements of original array: ");
    for(i=0;i<N;i++){
        printf("  %d  ",arr1[i]);
    }
    printf("\n");
    printf("Elements of new array: ");
    for(i=0;i<N;i++){
        printf("  %d  ",arr2[i]);
    }
}