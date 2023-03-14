#include <stdio.h>
int main()
{
    int N, sum;
    printf("Enter a number");
    scanf("%d", &N);
    sum = 0;

    do
    {
        sum += N % 10;
        N = N / 10;
    } 
    while (N > 0);
        printf("The sum is %d", sum);
        
}