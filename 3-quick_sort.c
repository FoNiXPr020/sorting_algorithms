#include "sort.h"

int sort_partition(int *args, int start, int end, size_t size);
void algorithm(int *args, int start, int end, size_t size);

/**
 * sort_partition - performs array partitioning for sorting.
 * @args: the array to be sorted.
 * @start: the index of the first element in the partition range.
 * @end: the index of the last element in the partition range.
 * @size: the size of the array.
 * Return: the index of the pivot element after partitioning.
 */
int sort_partition(int *args, int start, int end, size_t size)
{
	int i = start - 1, iTemp, j;

	for (j = start; j <= end - 1; j++)
	{
		if (args[j] < args[end])
		{
			i++;
			if (i < j)
			{
				iTemp = args[i];
				args[i] = args[j];
				args[j] = iTemp;
				print_array(args, size);
			}
		}
	}
	if (args[i + 1] > args[end])
	{
		iTemp = args[i + 1];
		args[i + 1] = args[end];
		args[end] = iTemp;
		print_array(args, size);
	}

	return (i + 1);
}

/**
 * algorithm - recursively sorts an array
 * of integers using a specific algorithm.
 * @args: the array to be sorted.
 * @start: the index of the first element in the sorting range.
 * @end: the index of the last element in the sorting range.
 * @size: the size of the array.
 * Return: the index of the pivot element after partitioning.
 */

void algorithm(int *args, int start, int end, size_t size)
{
	int present;

	if (start < end)
	{
		present = sort_partition(args, start, end, size);
		algorithm(args, start, present - 1, size);
		algorithm(args, present + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick Sort algorithm.
 * @array: the array to be sorted.
 * @size: the size of the array.
 * Description: This function implements the Quick Sort algorithm.
 *
 */
void quick_sort(int *array, size_t size)
{
	algorithm(array, 0, size - 1, size);
}
