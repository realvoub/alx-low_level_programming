#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array within a range
 * @min: starting number
 * @max: ending number
 * Return: the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;

	return (array);
}
