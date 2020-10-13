/*
   Here's a simplified version of the Beaufort scale, which is used to estimate
   wind force:
   
   Speed (knots)  Description
   Less than 1    Calm
   1-3            Light air
   4-27           Breeze
   28-47          Gale
   48-63          Storm
   Above 63       Hurricane

   Write a program that asks the user to enter a wind speed (in knots), then
   displays the corresponding description.   
*/

#include <stdio.h>

int main(void)
{
   float speed;

   printf("Enter a wind speed (in knots): ");
   scanf("%f", &speed);   

   if (speed < 1.0f)
      printf("Calm\n");
   else if (speed <= 3.0f)
      printf("Light air\n");
   else if (speed <= 27.0f)
      printf("Breeze\n");
   else if (speed <= 47.0f)
      printf("Gale\n");
   else if (speed <= 63.0f)
      printf("Storm\n");
   else
      printf("Hurricane\n");

   return 0;
}
