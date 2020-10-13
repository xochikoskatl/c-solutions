/*
   Modify the upc.c program so that it checks whether a UPC is valid. After the
   user enters a UPC, the program will display VALID or NOT VALID.
*/

#include <stdio.h>

int main(void)
{
   int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c1, c2, first_sum, second_sum, 
      total;

   printf("Enter the first (single) digit: ");
   scanf("%1d", &d);
   printf("Enter first group of five digits: ");
   scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
   printf("Enter second group of five digits: ");
   scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
   printf("Enter the last (single) digit: ");
   scanf("%1d", &c1);

   first_sum = d + i2 + i4 + j1 + j3 + j5;
   second_sum = i1 + i3 + i5 + j2 + j4;
   total = 3 * first_sum + second_sum;
   c2 = 9 - (total - 1) % 10;

   if (c1 == c2)
      printf("VALID\n");
   else
      printf("INVALID\n");

   return 0;
}
