#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init(int**, char**);

int main()
{
	int *iptr;
	char *cptr;

	init(&iptr, &cptr);
	printf("%d\n%c\n", *iptr, *cptr);

}

void init(int **intptr, char **charptr)
{
	*intptr = (int*) malloc(sizeof(int));
	**intptr = 5;

	*charptr = (char*) malloc(sizeof(char));
	**charptr = '6';
}