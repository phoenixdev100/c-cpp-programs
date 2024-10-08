#include <stdio.h>
int main()
{
	// Program to find area of triangle
	int base, height;
	printf("Enter Value of Base: ");
	scanf("%d", &base);
	printf("Enter vaule of Height: ");
	scanf("%d", &height);
	printf("Area of Triangle with base %d and height %d is %dcm^2.\n", base, height, base * height / 2);
	return 0;
}
