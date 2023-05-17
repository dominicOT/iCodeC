/**
File Name: fibonnaci series.c
Author: Dominic OT
Date: 16-05-2023
*/


#include <stdio.h>

int main()
{
    int n, i, t1 = 0, t2 = 1, nTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    
	for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nTerm = t1 + t2;
        t1 = t2;
        t2 = nTerm;
    }
    return 0;
}

