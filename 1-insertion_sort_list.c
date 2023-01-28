#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort.
 *
 * @list: Pointer to list head.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list)
		return;

	current = *list;

	while (current->next)
	{
		/* Skip if current value is <= next node value */
		if (current->n <= current->next->n)
		{
			current = current->next;
			continue;
		}
		temp = current->next;

		/* Check if current node is list head or not */
		if (current->prev)
			current->prev->next = temp;
		else
			*list = temp;

		/* Modify temp->prev then current->prev */
		temp->prev = current->prev;
		current->prev = temp;

		/* Modify current->next then temp->next */
		current->next = temp->next;
		temp->next = current;

		if (current->next)
			current->next->prev = current;

		print_list(*list);

		/* Repeat, incase prior node is less than swapped node */
		if (current->prev->prev)
			current = current->prev->prev;
	}
}
