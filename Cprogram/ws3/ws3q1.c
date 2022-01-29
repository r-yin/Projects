#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int randnum[8],
		i;
	for(i=0;i<8;i++)
	{
		randnum[i] = rand()%(10+1);
		printf("%d ",randnum[i]);
	}
	printf("\n");

	for(i=7;i>=0;i--)
	{
		printf("%d ", randnum[i]);
	}

	printf("\n");

	return 0;
}