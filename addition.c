/**
File Name: addition.c
Author: Dominic OT
Date: 16-05-2023
*/


#include <stdio.h>

int main()
{
    int d, k, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &d, &k);
    
	sum = d + k;
    
	printf("Sum = %d", sum);
    
	return 0;
}
