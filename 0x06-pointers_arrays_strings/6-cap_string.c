#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 *Return: address of s
 */

char *cap_string(char *s)
{
	int d = 0; f;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + d))
	{
		if (*(s + d) >= 'a' && *(s + d) <= 'z')
		{
			if (d == 0)
				*(s + d) -= 'a' - 'A';
			else
			{
				for (f = 0; f <= 12; f++)
				{
					if (a[f] == *(s + d - 1))
						*(s + d) -= 'a' - 'A';
				}
			}
		}
		d++;
	}
	return (s);
}
