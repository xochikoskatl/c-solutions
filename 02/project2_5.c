/*
	Write a program that asks the user to enter a value for x and then
	displays the value of the following polynomial:
		3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

	Hint: C doesn't have an exponentiation operation, so you'll need 
	to multiply x by itself repeatedly in order to compute the powers
	of x.
*/

#include <stdio.h>

int main(void)
{
	int x, result;

	printf("Enter x: ");
	scanf("%d", &x);

	result = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x
	- x * x + 7 * x - 6;

	printf("Result: %d\n", result);

	return 0;
}
