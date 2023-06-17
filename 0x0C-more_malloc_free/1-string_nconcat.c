#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 *
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int valu1 = 0, valu2 = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[valu1] != '\0')
		valu1++;

	while (s2[valu2] != '\0')
		valu2++;

	if (n > valu2)
	n = valu2;

	a = malloc((valu1 + n + 1) * sizeof(char));

	if (a == NULL)
		return (0);

	for (x = 0; x < valu1; x++)
	a[x] = s1[x];

	for (; x < (valu1 + n); x++)
	a[x] = s2[x - valu1];

	a[x] = '\0';

	return (a);
}
