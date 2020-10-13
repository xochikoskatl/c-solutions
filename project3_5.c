/*
	Write a program that asks the user to enter the numbers from 1 to 16 (in any
	order) and then displays the numbers in a 4 by 4 arrangement, followed by the
	sums of the rows, columns, and diagonals:

		Enter the numbers from 1 to 16 in any order:
		16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

		16  3  2 13
		 5 10 11  8
		 9  6  7 12
		 4 15 14  1

		Row sums: 34 34 34 34
		Column sums: 34 34 34 34
		Diagonal sums: 34 34

	If the row, column, and diagonal sums are all the sam (as they are in this
	example), the members are said to form a magic square. The magic square shown
	here appears in a 1514 engraving by artist and mathematician Albrecht Dürer.
	(Note that the middle numbers in the last row give the date of the 
	engraving.)
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
	int r1, r2, r3, r4, c1, c2, c3, c4, d1, d2;

	printf("Enter the number from 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4,
				&n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

	r1 = n1 + n2 + n3 +n4;
	r2 = n5 + n6 + n7 +n8;
	r3 = n9 + n10 + n11 +n12;
	r4 = n13 + n14 + n15 +n16;

	c1 = n1 + n5 + n9 + n13;
	c2 = n2 + n6 + n10 + n14;
	c3 = n3 + n7 + n11 + n15;
	c4 = n4 + n8 + n12 + n16;

	d1 = n1 + n6 + n11 + n16;
	d2 = n4 + n7 + n10 + n13;

	printf("%2d %2d %2d %2d\n", n1, n2, n3, n4);
	printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
	printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
	printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);

	printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
	printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
	printf("Diagonal sums: %d %d\n", d1, d2);

	return 0;
}
