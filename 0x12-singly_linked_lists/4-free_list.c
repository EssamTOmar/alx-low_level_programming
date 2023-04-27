#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - function that frees a list_t list
 * @head: a pointe rto the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
