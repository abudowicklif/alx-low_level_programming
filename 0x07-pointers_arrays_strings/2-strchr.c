#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: char type pointer
 * @c: char type character
 * Return: the character and NULL if not found
 */

char *_strchr(char *s, char c)
{
	int m;

	while (1)
	{
		m = *s++;
		if (m == c)
		{
			return (s - 1);
		}
		if (m == 0)
		{
			return (NULL);
		}
	}
}
