#include "sort.h"

/**
 * shell_sort - Sorts an array using Shell
 * sort algorithm with Knuth Sequence
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: This function implements the Shell sort algorithm
 * using the Knuth Sequence for gap generation.
 */
void shell_sort(int *array, size_t size)
{
	int iGen = 1, j, i, iTemp;

	while (iGen < ((int)(size)))
		iGen = (3 * iGen) + 1;
	for (iGen = (iGen - 1) / 3; iGen > 0; iGen = (iGen - 1) / 3)
	{
		for (i = iGen; i < (int)size; i += 1)
		{
			iTemp = array[i];

			for (j = i; j >= iGen && array[j - iGen] > iTemp; j -= iGen)
				array[j] = array[j - iGen];

			array[j] = iTemp;
		}

		print_array(array, size);
	}
}
