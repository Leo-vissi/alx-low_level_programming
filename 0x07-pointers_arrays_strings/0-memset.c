#include "main.h"
/**
 * _memset - file a block of memory with a value
 * @s: starting address of memory to file
 * @b: the value
 * @n: number of the memory area pointed
 *
 * Return: changed arr with new value for n bytes
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

