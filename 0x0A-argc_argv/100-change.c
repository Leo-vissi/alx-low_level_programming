#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *         note : coins[] Count the minimum number of coin to make
 *                change for a given coin value 
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int valu, y, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	valu = atoi(argv[1]);
	sum = 0;

	if (valu < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && valu >= 0; y++)
	{
		while (valu >= coins[y])
		{
			sum++;
			valu -= coins[y];
		}
	}

	printf("%d\n", sum);
	return (0);
}
