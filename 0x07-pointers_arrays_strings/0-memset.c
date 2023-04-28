#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory block
 * @b: the value to desired 
 * @n: number of the memory area pointed
 *
 * Return: Changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

         for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
