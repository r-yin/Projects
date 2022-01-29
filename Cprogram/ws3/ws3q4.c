#include <stdio.h>

int main()
{
	typedef struct{
		float real;
		float imaginary;
	} complex;

	float r,
		i;

	printf("Enter real part: ");
	scanf("%f", &r);

	printf("Enter imaginary part: ");
	scanf("%f", &i);

	complex num1 = {r,i};

	printf("%.2f + i%.2f\n", num1.real,num1.imaginary);
}