/**
File Name: array sum.c
Author: Dominic OT
Date: 19-05-2023
Description: Program to calculate the sum of even elements in the array
*/


#include <stdio.h>

int main()
{
    int arr[10], d, n;
	int sum=0;
    
	printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    
	for(d=0; d<n; d++)
    {
        scanf("%d", &arr[d]);
        if(arr[d] % 2 == 0)
            sum += arr[d];
    }
    printf("Sum of even elements in the array: %d", sum);
    
	return 0;
}

