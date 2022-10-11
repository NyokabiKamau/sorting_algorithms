#include "sort.h"

/**
 * swap_root - A function that swap the root nodes.
 * @array: The heap to sort.
 * @root: The root of the heap.
 * @hi: The higher index.
 * @size: The size of the array.
 * Return: Nothing
 */
void swap_root(int *array, size_t root, size_t hi, size_t size)
{
	size_t lower = 0, min = 0, temp = 0;
	int a = 0;

	while ((lower = (2 * root + 1)) <= hi)
	{
		temp = root;
		min = lower + 1;
		if (array[temp] < array[lower])
			temp = lower;
		if (min <= hi && array[temp] < array[min])
			temp = min;
		if (temp == root)
			return;
		a = array[root];
		array[root] = array[temp];
		array[temp] = a;
		print_array(array, size);
		root = temp;
	}
}

/**
 * heap_sort - A function that sorts an array using heap algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void heap_sort(int *array, size_t size)
{
	size_t hi = 0, gap = 0;
	int temp = 0;

		if (array == NULL || size < 2)
			return;

		for (gap = (size - 2) / 2; 1; gap--)
		{
			swap_root(array, gap, size - 1, size);
			if (gap == 0)
				break;
		}

		hi = size - 1;
		while (hi > 0)
	{
		temp = array[hi];
		array[hi] = array[0];
		array[0] = temp;
		print_array(array, size);
		hi--;
		swap_root(array, 0, hi, size);
	}
}
