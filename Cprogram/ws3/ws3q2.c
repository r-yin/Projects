#include <stdio.h>
#include <string.h>

int main()
{
	char a[11],
		b[10];

	printf("Enter string: ");
	gets(b);

	strcpy(a, "hello");

	strcat(a, "world");

	int len = strlen(a);

	printf("a: %s b: %s\n",a,b);

	return 0;


}