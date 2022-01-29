#include <stdio.h>

void askinput(float *, float *);

void calccoe(float, float, float *, float *);

void printres(float, float);

int main()
{
	float tc,
	* in1 = &tc;
	float th,
	* in2 = &th;
	float Rcp,
	* res1 = &Rcp;
	float Hcp,
	*res2 = &Hcp;

	askinput(in1, in2);
	calccoe(tc, th, res1, res2);
	printres(Rcp, Hcp);

}

void askinput(float * input1, float * input2)
{
	printf("Enter tc: ");
	scanf("%f", input1);

	printf("Enter th: ");
	scanf("%f", input2);
}

void calccoe(float tc, float th, float * coe1, float * coe2)
{
	*coe1 = tc/(th-tc);
	*coe2 = th/(th-tc);

}

void printres(float Rcp, float Hcp)
{
	printf("Refrig cp: %.2f\n", Rcp);
	printf("Refrig cp: %.2f\n", Hcp);
}