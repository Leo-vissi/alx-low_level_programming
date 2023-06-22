#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int valu, sum = 0, x, y;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");
				return (1);
			}
		}
		valu = atoi(argv[x]);
		sum += valu;
	}

	printf("%d\n", sum);

	return (0);
}
