/*
   Write a program that reads a 5x5 array of integers and then prints the 
   row sums and the column sums:

      Enter row 1: 8 3 9 0 10
      Enter row 2: 3 5 17 1 1
      Enter row 3: 2 8 6 23 1
      Enter row 4: 15 7 3 2 9
      Enter row 5: 6 14 2 6 0

      Row totals: 30 27 40 36 28
      Column totals: 34 37 37 32 21
*/

#include <stdio.h>

int main(void)
{
   int matrix[5][5];
   int i, j, sumr, sumc;

   for(i = 0; i < 5; i++)
   {
      printf("Enter row %d: ", i + 1);
      for(j = 0; j < 5; j++)
      {
          scanf("%d", &matrix[i][j]);
      }
   }   

   printf("\nRow totals: ");
   for(i = 0; i < 5; i++)
   {
      sumr = 0;
      for(j = 0; j < 5; j++)
      {
         sumr = sumr + matrix[i][j]; 
      }
      printf("%d ", sumr);
   } 

   printf("\nColumn totals: ");
   for(i = 0; i < 5; i++)
   {
      sumc = 0;
      for(j = 0; j < 5; j++)
      {
         sumc = sumc + matrix[j][i]; 
      }
      printf("%d ", sumc);
   } 
   printf("\n");

   return 0;
}
