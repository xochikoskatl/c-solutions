/*
   Modify the broker.c program by making both of the following changes:
   (a) Ask the user to enter the number of shares and the price per share, 
   instead of the value of the trade.
   (b) Add statements that compute the commission charged by a rival broker
   ($33 plus 3c per share for fewer than 2000 shares; $33 plus 2c per share for
   2000 shares or more). Display the rival's commission as well as the 
   commission charged by the original broker.
*/

#include <stdio.h>

int main(void)
{
   float commission, commission_rival, shares, price;

   printf("Enter the number of shares and the price per share: ");
   scanf("%f, %f", &shares, &price);

   if (shares * price < 2500.00f)
      commission = 30.00f + .017f * shares * price;
   else if (shares * price < 6250.00f)
      commission = 56.00f + .0066f * shares * price;
   else if (shares * price < 20000.00f)
      commission = 76.00f + .0034f * shares * price;
   else if (shares * price < 50000.00f)
      commission = 100.00f + .0022f * shares * price;
   else if (shares * price < 500000.00f)
      commission = 155.00f + .0011f * shares * price;
   else 
      commission = 255.00f + .0009f * shares * price;

   if (commission < 39.00f)
      commission = 39.00f;

   if (shares < 2000)
      commission_rival = 33.0f + .03f * shares;
   else
      commission_rival = 33.0f + .02f * shares;

   printf("Commission: $%.2f\n", commission);
   printf("Rival's commission: $%.2f\n", commission_rival);

   return 0;
}
