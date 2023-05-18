/**
File Name: perfect number.c
Author: Dominic OT
Date: 18-05-2023
*/



#include <stdio.h>

int main()
{
    int num, d;
	int sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(d=1; d<num; d++)
    {
        if(num % d == 0)
            sum += d;
    }
    if(sum == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}
