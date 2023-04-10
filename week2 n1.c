#include<stdio.h>

int main(){
    int N , i , num, occr=0;

    printf("Enter the Array size =");
    scanf("%d",&N);

    int arr[N];

    printf("Enter into array %d elements: ",N);

    for( i=0; i<N; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the array element to know the occurence=");
    scanf("%d",&num);

    for (i=0; i<N ; i++){
        if(arr[i]==num){
            occr +=1;
        }
    }

    printf("The number of occurence of %d is %d",num,occr);
}