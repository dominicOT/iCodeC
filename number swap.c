/**
File Name: number swap.c
Author: Dominic OT
Date: 19-05-2023
Description: Swap numbers without using a third variable
*/


#include <stdio.h>

int main()
{
	//declaration of variables
    int num1, num2;

	//receiving input of two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping: num1 = %d, num2 = %d", num1, num2);

    return 0;
}

