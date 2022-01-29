#include <stdio.h>


int main()
{
	int	num = 0;
	float avg,
		grade,
		s = 0;

	printf("Enter quiz grade: ");
	while (scanf("%f", &grade) == 1)
	{
		s += grade;
		printf("Enter quiz grade: ");
		num ++;
	}

	avg = (float) s/num;

	printf("Average quiz grade is %.2f\n", avg);

	return 0;

}

