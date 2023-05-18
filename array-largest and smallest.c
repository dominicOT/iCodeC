/**
File Name: array-largest and smallest.c
Author: Dominic OT
Date: 18-05-2023
*/


#include <stdio.h>

int main()
{
    int arr[10];
	int d, n, max, min;
    
	printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    
	for(d=0; d<n; d++)
    {
        scanf("%d", &arr[d]);
    }
    
	max = arr[0];
    min = arr[0];
    
	for(d=1; d<n; d++)
    {
        if(arr[d] > max)
        {
            max = arr[d];
        }
        if(arr[d] < min)
        {
            min = arr[d];
        }
    }
    printf("Largest element in the array: %d\n", max);
    printf("Smallest element in the array: %d", min);
    
	return 0;
}

