/**
File Name: even or odd.c
Author: Dominic OT
Date: 16-05-2023
*/


#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
	if(num % 2 == 0) 
	{
	    printf("%d is even", num);
	}
    else
    {
        printf("%d is odd", num);
	}
    return 0;
}

