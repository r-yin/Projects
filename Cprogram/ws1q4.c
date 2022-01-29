#include <math.h>
#include <stdio.h>
#define e 2.71828
#define k 0.0367
#define t 20

int main()
{
	float T,
		a,
		TF;

	printf("Enter initial temperature: \n");
	scanf("%f", &T);
	printf("Enter surrounding temperature: \n");
	scanf("%f", &a);
	TF = (T-a)*pow(e,-k*t)+a;

	printf("Final temp is: %.3f\n", TF);

	return 0;
}