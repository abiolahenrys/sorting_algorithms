#include "sort.h"

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm.
 *
 * @array: Array of integers to be sorted.
 * @size: Size of array of integers passed.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
