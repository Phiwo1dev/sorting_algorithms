#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - a function that pints an array of integers
 *
 * @array: Array to be printed
 * @size: Number of elements in an array
 */
void print_array(const int *array, size_t size)

{
	size_t n;

	n = 0;
	while (array && n < size)
	{
		if (n > 0)
			printf(", ");
		printf("%d", array[n]);
		++n;
	}
	printf("\n");
}
