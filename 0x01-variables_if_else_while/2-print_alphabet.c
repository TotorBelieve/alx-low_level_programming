#include <stdio.h>
/**
 * main - print alphabet in lower case using putchar
 *
 * Return: 0
 */

int main(void)
{
	char c;
	c = 'a';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
