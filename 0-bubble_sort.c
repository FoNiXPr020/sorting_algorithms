#include "sort.h"

/**
 * bubble_sort - sort list with bubble
 * @array: The array to be printed
 * @size: Number of elements in @array
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
