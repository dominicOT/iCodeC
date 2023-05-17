/**
File Name: fibonnaci series.c
Author: Dominic OT
Date: 16-05-2023
*/

#include <stdio.h>

int main()
{
    int num, fact=1, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    
	for(i=1; i<=num; i++)
	{
        fact = fact * i;
    }
    
    printf("Factorial of %d is %d", num, fact);
    return 0;
}

