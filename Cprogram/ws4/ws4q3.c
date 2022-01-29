#include <stdio.h>

float carnotE(float tc, float th)
{
	float carnot = 1 - tc/th;
	return carnot;
}

void printres(float carnot)
{
	printf("Carnot efficiency: %.3f\n", carnot);
}

int main()
{
	float tc,
		th;

	printf("enter cold reservoirs: ");
	scanf("%f", &tc);

	printf("enter hot reservoirs: ");
	scanf("%f", &th);

	printres(carnotE(tc, th));
}
