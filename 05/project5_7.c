/*
   Write a program that finds the largest and smallest of four integers
   entered by the user:

      Enter four integers: 21 43 10 35
      Largest: 43
      Smallest: 10

   Use as few if statements as possible. Hint: Four if statements are 
   sufficient.
*/

#include <stdio.h>

int main(void)
{
   int i1, i2, i3, i4, max, min, max1, max2, min1, min2;

   printf("Enter four integers: ");
   scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

   if (i1 > i2)
   {
      max1 = i1;
      min1 = i2;
   }
   else
   {
      max1 = i2;
      min1 = i1;   
   }

   if (i3 > i4)
   {
      max2 = i3;
      min2 = i4;
   }
   else
   {
      max2 = i4;
      min2 = i3;
   }

   if (max1 > max2)
      printf("Largest: %d\n", max1);
   else
      printf("Largest: %d\n", max2);
   
   if (min1 < min2)
      printf("Smallest: %d\n", min1);
   else
      printf("Smallest: %d\n", min2);

   return 0;
}
