#include "sort.h"

/**
 *  function that sorts an array of integers in ascending order using
 *  Bubble sort algorithm
 *
 * @array: an array of integer values
 * @size: size of the array
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp = 0, ctrl = 1;

	if (!array || !size)
		return;

	while (ctrl)
	{
		ctrl = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				ctrl = 1;
				print_array(array, size);
			}
		}
	}
}
