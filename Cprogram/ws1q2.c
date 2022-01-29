#include <stdio.h>



int main()
{
	int days,
		w,
		d;

	printf("How many total days? \n");
	scanf("%d", &days);

	w = days/7;
	d = days%7;


	printf("%d days is equivalent to %d weeks and %d days.\n", days, w, d);



	return 0;	
}