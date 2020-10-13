/*
	Modify the program of Programming Project 2 so that it prompts the
	user to enter the radius of the sphere.
*/

#include <stdio.h>

int main(void)
{
	float volume, radius;

	printf("Enter radius: ");
	scanf("%f", &radius);

	volume = 4.0f / 3.0f * 3.141516f * radius * radius * radius;

	printf("Volume: %.2f\n", volume);

	return 0;
}
