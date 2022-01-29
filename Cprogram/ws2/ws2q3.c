#include <stdio.h>
#define quizNum 3

int main()
{
	int grade,
		s = 0,
		i;
	float avg;

	for (i=0;i<quizNum;i++)
	{
		printf("Enter quiz grade: ");
		scanf("%d", &grade);

		s += grade;
	}

	avg = (float) s/quizNum;

	printf("Average quiz grade is %.2f\n", avg);

}

