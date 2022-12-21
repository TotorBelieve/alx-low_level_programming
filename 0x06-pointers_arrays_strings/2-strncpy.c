#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the source of string
 * @dest: the string destination
 * @n: length of int
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);
}
