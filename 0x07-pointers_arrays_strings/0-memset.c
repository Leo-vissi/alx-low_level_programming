#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be file
 * @b: the desired value
 * @n: number of the memory area pointed
 *
 * Return: changed arr with new value for n 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
