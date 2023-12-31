#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: character type pointer
 * @accept: character type pointer
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int p, q;

	for (p = 0; *s != '\0'; p++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (*s == accept[q])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
