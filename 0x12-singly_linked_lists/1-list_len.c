#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: a pointer to the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		h = h->next;
		list_len++;
	}
	return (list_len);
}
