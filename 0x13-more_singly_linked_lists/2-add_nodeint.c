#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a list
 * @head: head of the pointer.
 * @n: new data to be added on listint_t.
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
