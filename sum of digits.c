/**
File Name: sum of digits.c
Author: Dominic OT
Date: 19-05-2023
Description: Calculate the sum of digits of a number
*/


#include <stdio.h>

int main()
{
    int num, rmdr;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rmdr = num % 10;
        sum += rmdr;
        num /= 10;
    }

    printf("Sum of digits: %d", sum);

    return 0;
}

