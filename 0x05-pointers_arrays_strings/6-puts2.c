#include "main.h"

/**
 * puts2 - prints all string characters.
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}
}
