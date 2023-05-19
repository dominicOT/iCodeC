/**
File Name: area and per.c
Author: Dominic OT
Date: 19-05-2023
Description: Calculate the area and perimeter of a rectangle
*/


#include <stdio.h>

int main()
{
    int brdth, area, len, per;

    printf("Enter the length of rectangle: ");
    scanf("%d", &len);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &brdth);

    area = len * brdth;
    per = 2 * (len + brdth);

    printf("Area of rectangle: %d\n", area);
    printf("Perimeter of rectangle: %d", per);

    return 0;
}

