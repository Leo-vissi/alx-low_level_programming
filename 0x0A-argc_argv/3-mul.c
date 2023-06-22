#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum, valu_1, valu_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		valu_1 = atoi(argv[1]);
		valu_2 = atoi(argv[2]);

		sum = valu_1 * valu_2;

		printf("%d\n", sum);
	}

	return (0);
}
