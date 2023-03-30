#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));

	new->data = *str;
	new->next = (*head);

	(*head) = new;

	return (0);
}
