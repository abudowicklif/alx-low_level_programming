#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int type pointer
 * @b: int type pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
