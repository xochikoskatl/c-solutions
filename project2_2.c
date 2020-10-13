/*
	Write a program that computes the volume of a sphere with a
	10-meter radius, using the formula v = 4/3*pi*r^3. Write the
	fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
	Hint: C doesn't have an exponentiation operator, so you'll need to
	multiply r by itself twice to compute r^3.
*/

#include <stdio.h>

int main(void)
{
	float volume, radius = 10.0f;

	volume = 4.0f / 3.0f * 3.141516f * radius * radius * radius;

	printf("Volume: %.2f\n", volume);

	return 0;
}
