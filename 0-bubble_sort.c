#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm.
 * @array: the array to be sorted.
 * @size: the number of elements in the array.
 *
 * Description: This function employs the bubble sort algorithm.
*/
void bubble_sort(int *array, size_t size)
{
	size_t iNum = 0, iTmp = size;
	int Saver;

	if (array == NULL)
		return;

	for (iTmp = size; iTmp > 0; iTmp--)
	{
		for (iNum = 0; iNum < size - 1; iNum++)
		{
			if (array[iNum] > array[iNum + 1])
			{
				Saver = array[iNum];
				array[iNum] = array[iNum + 1];
				array[iNum + 1] = Saver;
				print_array(array, size);
			}
		}
	}
}
