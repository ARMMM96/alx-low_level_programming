#include "main.h"
/**
 * print_array -Print n elements of an array,followed by a new line.
 * Numbers are separated by comma, followed by a space.
 *
 * @a: A pointer to an array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
