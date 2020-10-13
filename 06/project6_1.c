/* Write a program that finds the largest in a series of numbers entered by the
   user. The program must prompt the user to enter numbers one by one. When the
   user enters 0 or a negative number, the program must display the largest
   nonnegative number entered:

      Enter a number: 60
      Enter a number: 38.3
      Enter a number: 4.89
      Enter a number: 100.62
      Enter a number: 75.2295
      Enter a number: 0

      The largest number entered was 100.62

   Notice that the numbers aren't necessarily integers.
*/

#include <stdio.h>

int main(void)
{  
   float number1 = 0.0f, number2;
   
   do
   {
      printf("Enter a number: ");
      scanf("%f", &number2);

      if(number2 > number1)
         number1 = number2;
     
   } while(number2 > 0);

   printf("The largest number entered was %f\n", number1);

   return 0;
}
