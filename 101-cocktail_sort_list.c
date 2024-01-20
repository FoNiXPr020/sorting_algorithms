#include "sort.h"

/**
 * swap_nodes - Swap the positions of two nodes in a doubly linked list.
 * @current: Pointer to the first node to be swapped.
 * @curr_old: Pointer to the second node to be swapped.
 * @list: Doubly linked list containing the nodes.
 *
 * Description: This function swaps the positions of two nodes in a doubly
 * linked list.
 */
void swap_nodes(listint_t *current, listint_t *curr_old, listint_t **list)
{
	listint_t *iTemp1 = current->next;
	listint_t *itemp2 = curr_old->prev;

	if (iTemp1 != NULL)
		iTemp1->prev = curr_old;
	if (itemp2 != NULL)
		itemp2->next = current;

	current->prev = itemp2;
	curr_old->next = iTemp1;
	current->next = curr_old;
	curr_old->prev = current;

	if (*list == curr_old)
		*list = current;
	print_list(*list);
}

/**
 * cocktail_sort_list - Sorts a doubly
 * linked list using the Cocktail Shaker sort.
 * @list: The doubly linked list to be sorted.
 *
 * Description: This function implements the Cocktail Shaker sort algorithm
 * on a doubly linked list.
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *engine = *list, *start = NULL, *end = NULL;

	if (!list)
		return;

	if (!(*list))
		return;

	if (!(*list)->next)
		return;

	do {
		while (engine->next)
		{
			if (engine->n > engine->next->n)
				swap_nodes(engine->next, engine, list);
			else
				engine = engine->next;
		}
		end = engine;
		while (engine->prev != start)
		{
			if (engine->n < engine->prev->n)
				swap_nodes(engine, engine->prev, list);
			else
				engine = engine->prev;
		}
		start = engine;
	} while (start != end);
}
