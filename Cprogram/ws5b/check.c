#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Code Version A */

int main()
{
 printf("Enter an integer >= 7: ");
 scanf("%d", &x);

 while(x < 7)
 {
 printf("Enter an integer >= 7: ");
 scanf("%d", &x);
 }
 printf("OK!\n");

 /* Code Version B */

 do
 {
 printf("Enter an integer >= 7: ");
 scanf("%d", &x);
 } while (x < 7);
 printf("OK!\n");

}