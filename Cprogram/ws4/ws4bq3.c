#include <stdio.h>
#include <math.h>

void getinput(int *, int *, int *);
void calcD(int, int, int, int *);
void calcroots(int, int, int, int, float *, float *);
void printres(float, float);

int main()
{
	int a, b, c;

	int *in1 = &a;
	int *in2 = &b;
	int *in3 = &c;

	int resD,
	*d = &resD;

	float root1,
	*r1 = &root1;

	float root2,
	*r2 = &root2;

	getinput(in1, in2, in3);
	calcD(a, b, c, d);
	// printf("%d", resD);
	calcroots(a,b,c,resD, r1, r2);
	printres(root1, root2);

}

void getinput(int *in1, int *in2, int *in3)
{
	printf("a: ");
	scanf("%d", in1);

	printf("b: ");
	scanf("%d", in2);

	printf("c: ");
	scanf("%d", in3);
}

void calcD(int a, int b, int c, int *getd)
{
	*getd = pow(b, 2)-4*a*c;

}

void calcroots(int a, int b, int c, int d, float *r1, float *r2)
{
	*r1 = (-b+sqrt(d))/(2*a);
	*r2 = (-b-sqrt(d))/(2*a);
}

void printres(float r1, float r2)
{
	printf("Root1: %.2f\n", r1);
	printf("Root2: %.2f\n", r2);
}