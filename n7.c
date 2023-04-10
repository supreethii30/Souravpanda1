#include<stdio.h>

int max(int array[], int n) 
{
    int i, j, maxElement, count;
    int maxCount = 0;

    for(i = 0; i< n; i++)   //For loop to hold each element
    {
        count = 1;
        for(j = i+1; j < n; j++)  //For loop to check for duplicate elements
        {
            if(array[j] == array[i])
            {
                count++;  
                if(count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}

int main()
{
    int n;              
    printf("Enter the number of elements: ");
    scanf("%d",&n);    
    int array[n];      
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)  
    {
        scanf("%d",&array[i]);
    } 
    int maxElement = max(array, n);    
    printf("\n Maximum Repeating Element : %d",maxElement);   
    return 0;
}