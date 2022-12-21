#include "main.h"

/**
 * rot13 - encodes a string
 *@s: string to be encoded
 *Return: address of s
 */

char *rot13(char *s)
{
	int j, k;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (j = 0; *(s + j); j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (a[k] == *(s + j))
			{
				*(s + j) = b[k];
				break;
			}
		}
	}
	return (s);
}
