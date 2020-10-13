/*
	Write a program that prompts the user to enter a telephone number in the form
	(xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx

		Enter phone number [(xxx) xxx-xxxx]: (404) 817-69004	
		You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{
	int p1, p2, p3;
		
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &p1, &p2, &p3);

	printf("You entered %d.%d.%d\n", p1, p2, p3);

	return 0;
}
