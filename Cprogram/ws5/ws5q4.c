#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
	int age;
	char name[];
} stu;

void init(stu *);

int main()
{
	// int age1;
	// char name1[10];

	stu student1;

	init(&student1);

	printf("%s\n%d\n", student1.name, student1.age);
}

void init(stu *student)
{
	strcpy(student->name, "Raina");
	student->age  = 19;
}