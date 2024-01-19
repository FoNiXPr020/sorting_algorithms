#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm.
 * @array: the array to be sorted.
 * @size: the number of elements in the array.
 *
 * Description: This function employs the selection sort algorithm.
*/
void selection_sort(int *array, size_t size)
{
	size_t iNum, iCer, iLess, iTemp, iSwap;

	if (array == NULL)
		return;

	for (iNum = 0; iNum < size; iNum++)
	{
		for (iLess = iNum, iCer = iNum; iCer < size; iCer++)
			if (array[iCer] < array[iLess])
			{
				iLess = iCer;
				iSwap = 1;
			}
		if (iSwap == 1)
		{
			iTemp = array[iLess];
			array[iLess] = array[iNum];
			array[iNum] = iTemp;
			print_array(array, size);
			iSwap = 0;
		}
	}
}
