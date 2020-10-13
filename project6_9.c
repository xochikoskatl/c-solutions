/*
   Programming project 8 in chapter 2 asked you to write a program that 
   calculates the remaining balance on a loan after the first, second, and
   third monthly payments. Modify the program so that it also asks the 
   user to enter the number of payments and then displays the balance
   remaining after each of these payments.
*/

#include <stdio.h>

int main(void)
{
   float balance, interest, payment;
   int number, i;

	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
   printf("Enter number of payments: ");
   scanf("%d", &number);

   for(i = 1; i <= number; i++)
   {
      balance = balance*(1 + interest / 1200) - payment;
      printf("Balance remaining after payment no. %d: %.2f\n", i, balance);
   }

   return 0;
}
