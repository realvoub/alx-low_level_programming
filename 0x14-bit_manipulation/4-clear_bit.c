#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0.
 * at a given index
 * @index: index of the bit
 * @n: pointer of an unsigned long int
 *
 * Return: 1 if it worked and -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
