#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9';tens++)/* prints tens digit*/
		for (ones ='0'; ones <= '9'; ones++)/* prints ones digit*/
			if (