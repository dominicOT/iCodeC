/**
File Name: decimal-binary.c
Author: Dominic OT
Date: 18-05-2023
*/


#include <stdio.h>

int main()
{
    int decimal, rmdr; 
	int binary=0, base=1;
    
	printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
	while(decimal > 0)
    {
        rmdr = decimal % 2;
        binary += rmdr * base;
        decimal /= 2;
        base *= 10;
    }
    printf("Binary number: %d", binary);
    return 0;
}
