#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @arga: The number of arguments supplied to the program.
 * @argb: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) arga, char *argb[])
{
	int num1, num2;
	char *op;

	if (arga != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argb[1]);
	op = argb[2];
	num2 = atoi(argb[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
