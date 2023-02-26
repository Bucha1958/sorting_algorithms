#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 *
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	if (i > 0)
	  printf(", ");
	while (list != NULL)
	{
	  printf("%d\n", list->n);
	  list = list->next;
	  i++;
	}
	printf("\n");
}
