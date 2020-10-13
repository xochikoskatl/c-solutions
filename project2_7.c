/*
	Write a program that asks the user to enter a U.S dollar amount
	and then shows how to pay that amount using the smallest number of
	$20, $10, $5, and $1 bills:

		Enter a dollar amount: 93

		$20 bills: 4
		$10 bills: 1
		 $5 bills: 0
		 $1 bills: 3

	Hint: Divide the amount by 20 to determine the number of $20 bills
	needed, and then reduce the amount by the total value of the $20
	bills. Repeat for the other bill sizes. Be sure to use integer
	values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void)
{
	int amount, bill20, bill10, bill5, bill1;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	bill20 = amount / 20;
	amount = amount - 20 * bill20;
	bill10 = amount / 10;
	amount = amount - 10 * bill10;
	bill5 = amount / 5;
	amount = amount - 5 * bill5;
	bill1 = amount;

	printf("$20 bills: %d\n", bill20);
	printf("$10 bills: %d\n", bill10);
	printf(" $5 bills: %d\n", bill5);
	printf(" $1 bills: %d\n", bill1);

	return 0;
}
