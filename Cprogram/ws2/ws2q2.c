#include <stdio.h>

int main()
{
	int c;

	printf("Main Menu\n");
	printf("\n1. Hello\n");
	printf("2. Hi\n");
	printf("3. HOla\n");
	printf("Please enter a choice (1-3): ");
	scanf("%d", &c);

	// if (c==1)
	// 	printf("Hello\n");
	// 	break;
	// else if (c==2)
	// 	printf("Hi\n");
	// 	break;
	// else 
	// 	printf("Hola\n");
	// 	break;

	switch(c)
	{
		case 1:
			printf("Hello\n");
			break;
		case 2:
			printf("Hi\n");
			break;
		case 3:
			printf("Hola\n");
			break;
			
	}
}