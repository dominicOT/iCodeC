/**
File Name: positive-negative-zero.c
Author: DominicOT
Date: 16-05-2023
*/


#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
	if(num > 0)
	{
        printf("%d is positive.", num);
    }
    else if(num < 0)
    {
        printf("%d is negative.", num);
    }
    else {
    	printf("Number is zero.");
    }
    return 0;
}

