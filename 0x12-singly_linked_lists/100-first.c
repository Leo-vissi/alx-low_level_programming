#include <stdio.h>

/**
 * main - prints a message sentence before the main
 * function is executed
 */

void __attribute__((constructor)) main()
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
