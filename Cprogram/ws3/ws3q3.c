#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 8
#define COLS 4

int main()
{
	srand(time(NULL));

	int mat[ROWS][COLS],
		i,
		j,
		total;
	// generate matrix
	// find total average
	for(i=0;i<ROWS;i++)
	{
		for(j=0;j<COLS;j++)
		{
			mat[i][j] = rand()%(100+1);
			printf("%d ", mat[i][j]);
			total += mat[i][j];

		}

		printf("\n");
	}
	float avg = (float) total/(ROWS*COLS);
	printf("Average of all elements is %.2f\n", avg);

	// calculate avg rows
	for(i=0;i<ROWS;i++)
	{
		int totalROWS = 0;
		for(j=0;j<COLS;j++)
		{
			totalROWS += mat[i][j];
		}
		float avgROWS = (float) totalROWS/COLS;
		printf("Average of row %d is %.2f\n", i+1, avgROWS);
	}

	// calculate avg col
	for(i=0;i<COLS;i++)
	{
		int totalCOLS = 0;
		for(j=0;j<ROWS;j++)
		{
			totalCOLS += mat[i][j];
		}
		float avgCOLS = (float) totalCOLS/ROWS;
		printf("Average of column %d is %.2f\n", i+1, avgCOLS);
	}


}