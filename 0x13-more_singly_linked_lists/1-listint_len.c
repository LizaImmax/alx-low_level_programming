#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list.
 * @h: a pointer to the head of the list.
 *
 * Return:  number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		numb++;

		h = h->next;
	}

	return (numb);
}

