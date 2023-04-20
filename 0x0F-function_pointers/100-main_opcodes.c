#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @arga: number of arguments
 * @argb: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int arga, char *argb[])
{
	int byt, i;
	char *arr;

	if (arga != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argb[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < byt; i++)
	{
		if (i == byt - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
