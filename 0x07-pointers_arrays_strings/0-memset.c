#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory block
 * @b: the value byte
 * @n: number of the memory area pointed
 *
 * Return: Changed array with new value s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
        }
	
	return (s);
}
