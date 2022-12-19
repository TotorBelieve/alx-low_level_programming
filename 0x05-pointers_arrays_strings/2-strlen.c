#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char to check
 * Description: this returns the length of a string
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++)
		a++;
	return (a);
}
