#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
   int data;
   struct linked_list *next;
} element;

typedef element * elementptr;

void trav_and_print(elementptr);
int count_elems(elementptr); 

int main()
{


   elementptr first = NULL,
            last = NULL;

   printf("There are currently %d data.\n", count_elems(first));

   first = (elementptr) malloc(sizeof(element));
   last = first;
   last->data = 5;
   last->next = NULL;

   //Add another element

   last->next = (elementptr) malloc(sizeof(element));
   last = last->next;
   last->data = 6;
   last->next = NULL;

   printf("There are currently %d data.\n", count_elems(first));

   last->next = (elementptr) malloc(sizeof(element));
   last = last->next;
   printf("Enter next value: ");
   scanf("%d", &(last->data));
   last->next = NULL;

   printf("There are currently %d data.\n", count_elems(first));

   trav_and_print(first);

   free(first);
   free(last);

   return 0;

}

void trav_and_print(elementptr first)
{
   elementptr current = first;
   while(current != NULL)
   {
      printf("Value is: %d\n", current->data);
      current = current->next;
   }

}

int count_elems(elementptr first)
{
   elementptr current = first;
   int count = 0;
   while(current != NULL)
   {
      count += 1;
      current = current->next;
   }

   return count;
}