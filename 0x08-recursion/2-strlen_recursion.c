#include "main.h"
/**
 * _strlen_recursion - a funcyion that returns the length of a string.
 * @s: string computed
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}

	return (str);
}
