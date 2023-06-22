#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
