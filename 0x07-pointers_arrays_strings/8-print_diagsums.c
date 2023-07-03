#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: int type pointer
 * @size: int type integer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, sum = 0, total = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			sum += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			total += *(a + x);
	}
	printf("%d, %d\n", sum, total);
}
