/*
   Write a program that reads an integer entered by the user and displays it in
   octal (base 8):   
      
      Enter a number between 0 and 32767: 1953
      In octal, your number is: 03641

   The output should be displayed using five digits, even if fewer digits are
   sufficient. Hint: To convert the number to octal, first divide it by 8; the
   remainder is the last digit of the octal number (1, in this case). Then
   divide the original number by 8 and repeat the process to arrive at the next-
   to-last digit. (printf is capable of displaying numbers in base 8, so there's
   actually an easier way to write this.)
*/

#include <stdio.h>

int main(void)
{
   int n, n0, n1, n2, n3, n4;

   printf("Enter a number between 0 and 32767: ");
   scanf("%d", &n);

   n0 = n % 8;
   n = n / 8;
   n1 = n % 8;
   n = n / 8;
   n2 = n % 8;
   n = n / 8;
   n3 = n % 8;
   n = n / 8;
   n4 = n % 8;

   printf("In octal, your number is: %d%d%d%d%d\n", n4, n3, n2, n1, n0);

   return 0;
}
