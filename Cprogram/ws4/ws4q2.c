#include <stdio.h>

float r2s(float rain)
{
	float snow = 6.5 * rain;

	return snow;
}
void printres(float snow)
{
	printf("The approximation of the amount of snow is %f\n", snow);
}

int main()
{
	float rain;
	
	printf("Enter the number of inches of rain: ");
	scanf("%f", &rain);

	float snow = r2s(rain);
	printres(snow);

	return 0;
}