/**
File Name: reverse number.c
Author: DominicOT
Date: 16-05-2023
*/


#include<stdio.h>
int main()
{
    int num, rev=0, rmnd;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        rmnd = num % 10;
        rev = rev * 10 + rmnd;
        num /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}

