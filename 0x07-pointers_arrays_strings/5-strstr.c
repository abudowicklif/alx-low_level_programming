#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locate a substring
 * @haystack: character type string
 * @needle: character type string
 * Return: pointer to the beginning of the located string,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int p, q;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (q = 0; needle[q] != '\0'; q++)
		{
			if (haystack[p + q] != needle[q])
				break;
		}
		if (!needle[q])
			return (&haystack[p]);
	}
	return (NULL);
}
