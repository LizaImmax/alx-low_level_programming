#include "main.h"
#include <stdio.h>

/**
 * isdigit - check if the passed character is a digit 0 to 9 or not.
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{

	if ((c >= 0) && (c >= 9))
		return (1);

	return (0);
}
