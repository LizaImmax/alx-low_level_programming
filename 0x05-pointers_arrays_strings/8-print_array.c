#include "main.h"

/**
 * print_array - function that prints  elements of an array of integers
 *  @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
