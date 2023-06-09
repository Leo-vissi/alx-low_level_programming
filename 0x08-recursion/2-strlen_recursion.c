#include "main.h"
/**
 * _strlen_recursion - Returns the length of a str.
 * @s: The str.
 *
 * Return: Int.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
