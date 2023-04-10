#include <stdio.h>
#include "main.h"

/**
 * print_binary- a function that prints binary representation of a number.
 * @n: number to be printed into binary
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

_putchar((n & 1) + '0');
}

