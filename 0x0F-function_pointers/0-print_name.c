#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name as function to pointer 
 * @name: string to add
 * @f: point to funct
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
