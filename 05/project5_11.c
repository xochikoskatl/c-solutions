/*
   Write a program that asks the user for a two-digit number, then prints the
   English word for the number:

      Enter a two-digit number: 45
      You entered the number forty-five.

   Hint: Break the number into two digits. Use one switch statement to print the
   word for the first digit ("twenty", "thirty", and so forth). Use a second
   switch statement to print the word for the second digit. Don't forget that
   the numbers between 11 and 19 require special treatment.
*/

#include <stdio.h>

int main(void)
{
   int d, u;

   printf("Enter a two-digit number: ");
   scanf("%1d%1d", &d, &u);

   printf("You entered the number ");

   if(d < 2)
   {
      switch(u)
      {
         case 0 : printf("ten.\n"); break;
         case 1 : printf("eleven.\n"); break;
         case 2 : printf("twelve.\n"); break;
         case 3 : printf("thirteen.\n"); break;
         case 4 : printf("fourteen.\n"); break;
         case 5 : printf("fifteen.\n"); break;
         case 6 : printf("sixteen.\n"); break;
         case 7 : printf("seventeen.\n"); break;
         case 8 : printf("eighteen.\n"); break;
         case 9 : printf("nineteen.\n"); break;
      }
   }
   else
   {   
      switch(d)
      {
         case 2 : printf("twenty"); break;
         case 3 : printf("thirty"); break;
         case 4 : printf("forty"); break;
         case 5 : printf("fifty"); break;
         case 6 : printf("sixty"); break;
         case 7 : printf("seventy"); break;
         case 8 : printf("eighty"); break;
         case 9 : printf("ninety"); break;
      }

      switch(u)
      {
         case 0 : printf(".\n"); break;
         case 1 : printf("-one.\n"); break;
         case 2 : printf("-two.\n"); break;
         case 3 : printf("-three.\n"); break;
         case 4 : printf("-four.\n"); break;
         case 5 : printf("-five.\n"); break;
         case 6 : printf("-six.\n"); break;
         case 7 : printf("-seven.\n"); break;
         case 8 : printf("-eight.\n"); break;
         case 9 : printf("-nine.\n"); break;
      }
   }

   return 0;
}
