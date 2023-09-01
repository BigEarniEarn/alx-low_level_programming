#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
