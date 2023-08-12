#include <stdio.h>
/**
 * main - A program that prints single digit number combinations
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
			putchar(i + '0');
			putchar(',');
			putchar(' ');
	}
	return (0);
}
