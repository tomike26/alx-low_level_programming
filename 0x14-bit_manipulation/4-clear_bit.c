#include "main.h"
#include <stdio.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *
 * @n: pointer to decimal number to change
 * @index: index position to change
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (b = 1; hold > 0; b *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= b;

	return (1);
}
