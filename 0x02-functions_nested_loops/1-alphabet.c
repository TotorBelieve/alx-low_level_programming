#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	-putchar('\n');
}
