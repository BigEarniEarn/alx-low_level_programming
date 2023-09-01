#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: cmd line arguments
 * @argv: array containing cmd line arguments
 * Return: 0 (Success)
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
