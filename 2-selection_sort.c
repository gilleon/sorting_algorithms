#include "sort.h"

/**
 * sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: an array of int
 * @size: size of the array
 *
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	int mindex, crindex = 0, blub;

	if (!array || !size)
		return;

	while (crindex < (int)size)
	{
		mindex = crindex;
		for (i = crindex + 1; i < size; i++)
		{
			if (array[i] < array[mindex])
				mindex = i;
		}
		if (crindex != mindex)
		{
			blub = array[mindex];
			array[mindex] = array[crindex];
			array[crindex] = blub;
			print_array(array, size);
		}
		crindex++;
	}
}
