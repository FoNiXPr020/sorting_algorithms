#include "sort.h"

/**
 * bubble_sort - sort list with bubble
 * @Array: The array to be printed
 * @Size: Number of elements in @array
 */
void bubble_sort(int *Array, size_t Size)
{
	size_t iNum = 0, iTmp = Size;
	int Saver;

	if (Array == NULL)
		return;

	for (iTmp = Size; iTmp > 0; iTmp--)
	{
		for (iNum = 0; iNum < Size - 1; iNum++)
		{
			if (Array[iNum] > Array[iNum + 1])
			{
				Saver = Array[iNum];
				Array[iNum] = Array[iNum + 1];
				Array[iNum + 1] = Saver;
				print_array(Array, Size);
			}
		}
	}
}
