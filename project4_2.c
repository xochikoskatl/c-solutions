/*
   Extend the program in Programming Project 1 to handle three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
   int n, n3, n2, n1;   

   printf("Enter a three-digit number: ");
   scanf("%d", &n);

   n1 = n % 10;
   n = n / 10;
   n2 = n % 10;
   n3 = n / 10;

   printf("The reversal is: %d%d%d\n", n1, n2, n3);

   return 0;
}
