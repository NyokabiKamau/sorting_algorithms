#include "sort.h"
#include "stdlib.h"

/**
 * counting_sort - sorts an array of integers in ascending order using the
 * Counting sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 */
void counting_sort(int *array, size_t size)
{
	int i, max;
	int *count_arr = NULL, *copy = NULL;
	size_t j, temp, result = 0;


	if (array == NULL || size < 2)
		return;
	copy = malloc(sizeof(int) * size);
	if (copy == NULL)
		return;
	for (j = 0, max = 0; j < size; j++)
	{
		copy[j] = array[j];
		if (array[j] > max)
			max = array[j];
	}
	count_arr = malloc(sizeof(int) * (max + 1));
	if (count_arr == NULL)
	{
		free(copy);
		return;
	}
	for (i = 0; i <= max; i++)
		count_arr[i] = 0;
	for (j = 0; j < size; j++)
		count_arr[array[j]] += 1;
	for (i = 0; i <= max; i++)
	{
		temp = count_arr[i];
		count_arr[i] = result;
		result += temp;
	}
	for (j = 0; j < size; j++)
	{
		array[count_arr[copy[j]]] = copy[j];
		count_arr[copy[j]] += 1;
	}
	print_array(count_arr, max + 1);
	free(count_arr);
	free(copy);
}
