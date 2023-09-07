#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a func that allocates memory using malloc
 * @b: input of bytes to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
