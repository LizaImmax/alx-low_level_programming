#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a  list.
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
