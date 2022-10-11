#include "sort.h"

/**
 * selection_sort - A function that sorts an array of integers in ascending
 * order using selection sort algorithm.
 * You’re expected to print the array after each time you swap two elements
 * @array: An array to sort.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0, min = 0;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
