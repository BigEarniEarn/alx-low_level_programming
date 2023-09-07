#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory to fill
 * @b: char
 * @n: num of times to copy b
 * Return: pointer to mem
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: num of elements
 * @size: size of element
 * Return: pointer to mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(size * nmemb);

	if (point == NULL)
	{
		return (NULL);
	}
	_memset(point, 0, nmemb * size);

	return (point);
}
