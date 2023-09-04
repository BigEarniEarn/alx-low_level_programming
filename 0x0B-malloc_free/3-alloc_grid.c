#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ch;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ch = malloc(sizeof(int *) * height);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ch[i] = malloc(sizeof(int) * width);

		if (ch[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ch[i]);

			free(ch);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ch[i][j] = 0;
	}
	return (ch);
}
