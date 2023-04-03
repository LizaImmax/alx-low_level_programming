#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a linked list.
 * @head: head of the pointer of listint_t.
 * @n: data to be added at the end of the list.
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	listint_t *last = *head;

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;

		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}

