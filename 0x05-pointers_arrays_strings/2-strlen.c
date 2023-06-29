#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char type pointer
 * Return: length of the string
 */

int _strlen(char *s)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
		;

	return (q);
}
