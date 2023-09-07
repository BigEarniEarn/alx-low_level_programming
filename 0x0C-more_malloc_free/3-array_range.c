#include "main.h"
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers
 * @min: min values to store
 * @max: max values to store
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *point;
	int i = 0, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	point = malloc(sizeof(int) * size);

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		point[i] = min++;
	}
	return (point);
}
