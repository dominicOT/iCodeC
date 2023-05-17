/**
File Name: fibonnaci series.c
Author: Dominic OT
Date: 16-05-2023
*/


#include <stdio.h>

int main()
{
    int z, y, x;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &z, &y, &x);
    
	if(z > y && z > x)
	{
        printf("%d is the largest number", z);
	}
	
    else if(y > z && y > x) 
	{
        printf("%d is the largest number", y);
    }
    else
    {
        printf("%d is the largest number", x);
    }
    return 0;
}

