#include "main.h"
/**
 *print_sign - determines if input number
 * greater, equal or less than zero.
 *
 * @n: input number as integer.
 *
 * Return: if greater than 0 returns 1. if 0 returns 0. if less than 0, -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
