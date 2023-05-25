/**
File Name: number power.c
Author: Dominic OT
Date: 25-05-2023
*/



#include <stdio.h>
#include <math.h>

int main()
{
    float base, expo, res;
    
    printf("Enter the base number: ");
    scanf("%f", &base);
    printf("Enter the exponent number: ");
    scanf("%f", &expo);
    
	res = pow(base, expo);
    
	printf("%.2f^%.2f = %.2f", base, expo, res);
    
	return 0;
}

