/*
   In one state, single residents are subject to the following income tax:

   Income         Amount of tax
   Not over $750  1% of income
   $750-$2,250    $7.50    plus 2% of amount over $750
   $2,250-$3,750  $37.50   plus 3% of amount over $2,250
   $3,750-$5,250  $82.50   plus 4% of amount over $3,750
   $5,250-$7,000  $142.50  plus 5% of amount over $5,250
   Over $7,000    $230.00  plus 6% of amount over $7,000

   Write a program that asks the user to enter the amount of taxable income, 
   then displays the tax due.
*/

#include <stdio.h>

int main(void)
{
   float income;

   printf("Enter the amount of taxable income: ");
   scanf("%f", &income);

   if (income < 750.0f)
      printf("Tax: $%.2f\n", income * 0.01f);
   else if (income < 2250.0f)
      printf("Tax: $%.2f\n", 7.5f + income * 0.02f);
   else if (income < 3750.0f)
      printf("Tax: $%.2f\n", 37.5f + income * 0.03f);
   else if (income < 5250.0f)
      printf("Tax: $%.2f\n", 82.5f + income * 0.04f);
   else if (income < 7000.0f)
      printf("Tax: $%.2f\n", 142.5f + income * 0.05f);
   else
      printf("Tax: $%.2f\n", 230.0f + income * 0.06f);

   return 0;
}
