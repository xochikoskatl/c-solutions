/*
   Write a program that asks the user to enter a two-digit number, then prints
   the number with its digits reverse. A session with the program should have
   the following appearance:
      
      Enter a two-digit number: 28
      The reversal is: 82

   Read the number using %d, then break it into two digits. Hint: If n is an
   integer, then n % 10 is the last digit in n and n / 10 is n with the last
   digit removed.
*/

#include <stdio.h>

int main(void)
{
   int n;
   
   printf("Enter a two-digit number: ");
   scanf("%d", &n);

   printf("The reversal is: %d%d\n", n % 10, n / 10);

   return 0;
}
