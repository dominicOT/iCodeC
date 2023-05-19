/**
File Name: sum of natural numbers.c
Author: Dominic OT
Date: 19-05-2023
Description: Calculate the sum of natural numbers from 1 - 10
*/



#include <stdio.h>

int main()
{
    int n, d;
	int sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(d=1; d<=n; d++)
    {
        sum += d;
    }
    printf("Sum of natural numbers from 1 to %d is %d", n, sum);
    return 0;
}

