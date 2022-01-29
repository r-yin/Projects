#include <stdio.h>


int main()
{
	int grade,
		s = 0,
		i,
		num;
	float avg;

	printf("Enter total number of quizzes: \n");
	scanf("%d", &num);

	for (i=0;i<num;i++)
	{
		printf("Enter quiz grade: ");
		scanf("%d", &grade);

		s += grade;
	}

	avg = (float) s/num;

	printf("Average quiz grade is %.2f\n", avg);

}

