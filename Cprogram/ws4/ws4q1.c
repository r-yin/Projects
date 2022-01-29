#include <stdio.h>
#define pi 3.14

float calcRadian (float angle)
{
	float radian = (float) angle*pi/180;
	return radian;
}

void printres(float in)
{
	printf("The angle in radian is %.2f.\n", in);
}

int main()
{

	float a = calcRadian(180);
	printres(a);
	return 0;
}

