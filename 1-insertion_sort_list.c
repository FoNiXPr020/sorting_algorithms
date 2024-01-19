#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list using
 * the insertion sort algorithm.
 * @list: the linked list to be sorted.
 *
 * Description: This function implements the insertion sort algoriths.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *iTemp;
	int n;

	if (!list)
		return;

	iTemp = *list;

	while (iTemp)
	{
		while (iTemp)
		{
			if (iTemp->next)
			{
				if (iTemp->n > iTemp->next->n)
				{
					n = iTemp->n;
					*(int *)&iTemp->n = iTemp->next->n;
					*(int *)&iTemp->next->n = n;
					iTemp = *list;
					print_list(*list);
					break;
				}
			}

			iTemp = iTemp->next;
		}
	}
}
