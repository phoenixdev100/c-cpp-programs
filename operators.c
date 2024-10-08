#include <stdio.h>
int main()
{
	// Variable Declaration
	int a, b;
	// Operators in C
	printf("Operators in C\n");
	// Arithmatic operators in C
	printf("Arithmatic Operators in C\n");
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
	scanf("%d", &b);
	printf("Sum of %d and %d is %d.\n", a, b, a + b);
	printf("Subtraction of %d and %d is %d.\n", a, b, a - b);
	printf("Multiplication of %d and %d is %d.\n", a, b, a * b);
	printf("Division of %d and %d is %d.\n", a, b, a / b);
	return 0;
}