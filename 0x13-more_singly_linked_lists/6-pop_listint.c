#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: deleted node or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	tempo = (*head)->next;
	free(*head);

	*head = tempo;

	return (num);
}
