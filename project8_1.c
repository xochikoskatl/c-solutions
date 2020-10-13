/*
   Modify the repdigit.c program so that it shows which digits (if any) were
   repeated:
      Enter a number: 939577
      Repeated digit(s): 7 9
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
   bool digit_seen[10] = {false}, digit_rep[10] = {false};
   int digit, i;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while(n > 0)
   {
      digit = n % 10;
      if(digit_seen[digit] == true)
         digit_rep[digit] = true;
      digit_seen[digit] = true;
      n /= 10;
   }

   printf("Repeated digit(s): ");
   for(i = 0; i < 10; i++)
   {
      if(digit_rep[i])
         printf("%d ", i);
   }
   printf("\n");

   return 0;
}
