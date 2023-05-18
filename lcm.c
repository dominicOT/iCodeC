/**
File Name: lcm.c
Author: Dominic OT
Date: 18-05-2023
*/





#include <stdio.h>

int main()
{
    int num1, num2, d, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    for(d=1; d<=num1 && d<=num2; ++d)
    {
        if(num1%d==0 && num2%d==0) 
		{
            gcd = d;
        }
    }
    lcm = (num1 * num2) / gcd;
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d", num1, num2, lcm);
    return 0;
}

