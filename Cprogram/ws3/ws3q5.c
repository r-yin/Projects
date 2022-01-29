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

	complex num1[3] = {r,i, r+1, i+1, r-1, i-1};
	// printf("%f %f", num1[0].real, num1[1].real);
	/*num1[0].real=r;
	num1[0].imaginary=i;
	*/
	/*num1[2] = {r+1,i+1};
	num1[1] = {r-1,i-1};
*/
	printf("%.2f + i%.2f\n", num1[0].real,num1[0].imaginary);
	printf("%.2f + i%.2f\n", num1[2].real,num1[2].imaginary);
	printf("%.2f + i%.2f\n", num1[1].real,num1[1].imaginary);

}