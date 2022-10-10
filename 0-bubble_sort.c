#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array of integer
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int temp = 0;
	int *arrayB = malloc(size * sizeof(int));

	arrayB = array;

	for (a = 1; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (arrayB[b] > arrayB[b + 1])
			{
				temp = arrayB[b];
				arrayB[b] = arrayB[b + 1];
				arrayB[b + 1] = temp;
				print_array(arrayB, size);
			}
		}
	}
}
