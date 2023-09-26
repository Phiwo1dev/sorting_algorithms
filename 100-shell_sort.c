#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - A function that sorts an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * Description: uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)

{
	size_t n, i, j;

	if (array == NULL || size < 2)
		return;

	for (n = 1; n < (size / 3);)
		n = n * 3 + 1;

	for (; n >= 1; n /= 3)
	{
		for (i = n; i < size; i++)
		{
			j = i;
			while (j >= n && array[j - n] > array[j])
			{
				swap_ints(array + j, array + (j - n));
				j -= n;
			}
		}
		print_array(array, size);
	}
}
