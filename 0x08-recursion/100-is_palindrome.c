#include "main.h"

/**
 * str_char - Return length of string
 * @s: The pointer the string
 *
 * Return: Int
 */

int str_char(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_char(s + 1));
	}
}

/**
 * check_Pal - Check if a string is a palindrome
 * @s: The string to check
 * @x: Starting index of str
 * @y: Ending index of str
 *
 * Return: 1 if palind and 0 to other
*/

int check_Pal(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (check_Pal(s, x + 1, y - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 *
 * Return: Int 
 */

int is_palindrome(char *s)
{
	int pld;

	pld = str_char(s);

	if (pld <= 1)
	{
		return (1);
	}

	else
	{
		return (check_Pal(s, 0, pld - 1));
	}
}
