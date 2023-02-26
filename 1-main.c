#include <stddef.h>
#include "sort.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */
listint_t *add_new_list(listint_t **head, int n)
{
  listint_t *new, *temp;
  
  temp = *head;
  if (new == NULL)
    return NULL;
  new = malloc(sizeof(listint_t));
  new->n = n;
  new->next = NULL;
  if (*head == NULL)
  {
    *head = new;
    return (new);
  }
  while (temp->next != NULL)
  {
      temp = temp->next;
  }
  temp->next = new;
  temp = new;
  return new;
}

/**
 *
 *
 *
 */
int main(void)
{
  listint_t *head;

  head = NULL;
  add_new_list(&head, 0);
  add_new_list(&head, 1);
  add_new_list(&head, 5);
  add_new_list(&head, 8);
  add_new_list(&head, 9);
  add_new_list(&head, 4);
  add_new_list(&head, 3);
  add_new_list(&head, 14);
  print_list(head);
  return 0;
}
  
  
