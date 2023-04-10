#include<stdio.h>

int main(){
    int n1,n2,n3;
    int a[1000], b[1000], c[1000];
    printf("Enter the size of 1st array: ");
    scanf("%d",&n1);
    printf("enter the array elements: \n");
    for(int i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of 2nd array: ");
    scanf("%d",&n2);
    printf("enter the array elements: \n");
    for(int i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }

    n3=n1 + n2;
    for(int i=0; i<n1; i++){
        c[i]=a[i];
    }
    for(int i=0; i<n2; i++){
        c[i+n1]=b[i];
    }
    printf("The merged array is: \n");
    for(int i=0; i<n3; i++){
        printf("   %d   ",c[i]);
    }

    printf("\nThe reverse array is: \n");
    for(int i=n3-1; i>=0; i--){
        printf("   %d   ",c[i]);
    }

}