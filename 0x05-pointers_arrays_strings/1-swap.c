#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of two integers.
 *@a: First Integer
 *@b:  Second integer
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
