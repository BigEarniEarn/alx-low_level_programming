#include <stdio.h>
/**
 * main - A program that prints the lphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
		putchar('\n');
	}
	return (0);
}
