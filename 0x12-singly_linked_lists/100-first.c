#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * prem_messages - prints a meassag sentence before the main
 * function is executed
 */

void prem_messages(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
