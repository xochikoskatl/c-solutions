/*
   Modify the repdigit.c program so that it prints a table showing how many
   times each digit appears in the number:
      Enter a number: 41271092
      Digit:       0 1 2 3 4 5 6 7 8 9
      Occurrences: 1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

int main(void)
{
   int digit_rep[10] = {0}, digit, i;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while(n > 0)
   {
      digit = n % 10;
      digit_rep[digit] += 1;
      n /= 10;
   }

   printf("Digit:\t\t");
   for(i = 0; i < 10; i++)
   {
      printf("%3d", i);
   }

   printf("\nOccurrences:\t");
   for(i = 0; i < 10; i++)
   {
      printf("%3d", digit_rep[i]);
   }
   printf("\n");

   return 0;
}
