#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array of integer
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;
	int *arrayB = malloc(size * sizeof(int));

	arrayB = array;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (arrayB[j] > arrayB[j + 1])
			{
				temp = arrayB[j];
				arrayB[j] = arrayB[j + 1];
				arrayB[j + 1] = temp;
				print_array(arrayB, size);
			}
		}
	}
}
