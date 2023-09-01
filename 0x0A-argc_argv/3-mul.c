#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that multiplies 2 numbers
 * @argc: num of cmd line arguments
 * @argv: array containing cmd line arguments
 * Return: 0 (Success) or 1 Error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
