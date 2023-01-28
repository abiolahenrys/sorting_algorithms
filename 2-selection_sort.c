#include "sort.h"

/**
 * selection_sort - Sorts an array of integers with selection sort.
 *
 * @array: Array of integers.
 * @size: Size of array.
 */
void selection_sort(int *array, size_t size)
{
	int least, index, temp, *current = array;
	size_t i, count = 0, _size = size;

	if (!array)
		return;

	while (count++ < size)
	{
		/* Get first node */
		least = current[0];

		/* Find least node */
		for (i = 1; i < _size; i++)
		{
			if (least > current[i])
			{
				least = current[i];
				index = i;
			}
		}

		/* Swap nodes if the least is not current node */
		if (least != current[0])
		{
			temp = current[0];
			current[0] = least;
			current[index] = temp;

			print_array(array, size);
		}

		/* Move to the next node */
		current++;
		_size--;
	}
}
