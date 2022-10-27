#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int endian;
	char *p;

	endian = 1;
	p = (char *) &endian;

	return ((int)*p);
}
