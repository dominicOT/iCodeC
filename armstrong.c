/**
File Name: Armstrong.c
Author: Dominic OT
Date: 18-05-2023
*/



#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, rmdr;
	int res=0, n=0;
    
	printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while(originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    
    originalNum = num;
    
	while(originalNum != 0)
    {
        rmdr = originalNum % 10;
        res += pow(rmdr, n);
        originalNum /= 10;
    }
    
	if(res == num) 
	{
        printf("%d is an Armstrong number", num);
    }
    else
    {
        printf("%d is not an Armstrong number", num);
    }
    return 0;
}

