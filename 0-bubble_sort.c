#include "sort.h"

/**
 * swap_ints - a function that Swaps two int in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of ints in ascending order.
 * @array: the array of integers to sort.
 * @size: Size of the array.
 *
 * Description: prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)

{
	size_t t, len = size;
	bool bubs = false;

	if (array == NULL || size < 2)
		return;

	while (bubs == false)
	{
		bubs = true;
		for (t = 0; t < len - 1; t++)
		{
			if (array[t] > array[t + 1])
			{
				swap_ints(array + t, array + t + 1);
				print_array(array, size);
				bubs = false;
			}
		}
		len--;
	}
}
