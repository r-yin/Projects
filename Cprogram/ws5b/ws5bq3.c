#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
   int data;
   struct linked_list *next;
} element;

typedef element * elementptr;

void trav_and_print(elementptr);

int main()
{

   elementptr first = NULL,
            last = NULL;

   first = (elementptr) malloc(sizeof(element));
   last = first;
   last->data = 5;
   last->next = NULL;

   //Add another element

   last->next = (elementptr) malloc(sizeof(element));
   last = last->next;
   last->data = 6;
   last->next = NULL;

   last->next = (elementptr) malloc(sizeof(element));
   last = last->next;
   printf("Enter next value: ");
   scanf("%d", &(last->data));
   last->next = NULL;

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

