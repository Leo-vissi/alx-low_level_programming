#include "main.h"

/**
 * _strlen_recursion - Length of a string
 * @s: String
 *
 * Return: Int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	n = _strlen_recursion(s);
	return (n + 1);
}
