#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - Checks if a string consists only of digits.
 * @s: The string to check.
 *
 * Return: 1 if the string consists only of digits, 0 otherwise.
 */

int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @sum1: The first number to multiply.
 * @sum2: The second number to multiply.
 *
 * Return: A pointer to the result of the
 */

int *mlty(char *sum1, char *sum2)
{
	int len_1 = 0, len_2 = 0, *result;
	int digit_1, digit_2, carry;
	int x, y;

	while (sum1[len_1])
		len_1++;
	while (sum2[len_2])
		len_2++;

	result = malloc(sizeof(int) * (len_1 + len_2));
	if (result == 0)
		return (0);

	for (x = 0; x < len_1 + len_2; x++)
		result[x] = 0;

	for (x = len_1 - 1; x >= 0; x--)
	{
		digit_1 = sum1[x] - '0';
		carry = 0;

		for (y = len_2 - 1; y >= 0; y--)
		{
			digit_2 = sum2[y] - '0';
			carry += result[x + y + 1] + (digit_1 * digit_2);
			result[x + y + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[x] = carry;
	}

	return (result);
}

/**
 * main - Adds two numbers represented as strings.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char **argv)
{
	int *result;
	int slec = 0;
	unsigned int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!(is_digit(argv[1]) && is_digit(argv[2])))
	{
		printf("Error\n");
		return (98);
	}

	result = multiply(argv[1], argv[2]);
	if (result == 0)
		return (0);

	for (x = 0; x < strlen(argv[1]) + strlen(argv[2]); x++)
	{
		if (result[x])
			slec = 1;
		if (slec)
			putchar(result[x] + '0');
	}

	if (slec == 0)
		putchar('0');

	putchar('\n');

	free(result);

	return (0);
}
