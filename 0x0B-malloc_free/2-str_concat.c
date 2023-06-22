#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string, to add at end of s1
 *
 * Return: Pointer to a newly allocated space
 * which contains the contents of s1 followed
 * by s2 and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *valu;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;

	while (s1[x] != '\0')
		x++;

	while (s2[y] != '\0')
		y++;

	valu = malloc(sizeof(char) * (x + y + 1));

	if (valu == NULL)
		return (NULL);

	x = y = 0;

	while (s1[x] != '\0')
	{
		valu[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		valu[x] = s2[y];
		x++, y++;
	}
	valu[x] = '\0';
	return (valu);
}
