#include <math.h>
#include <stdio.h>
#define PI 3.1415926
#define g 9.81

int main(){
	float len,
		period;

	printf("Enter the length of the pendulum (in meters): \n");
	scanf("%f", &len);

	period = 2*PI*sqrt(len/g);

	printf("The period is %.2f seconds.\n", period);

	return 0;
}