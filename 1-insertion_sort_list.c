#include "sort.h"
/**
 * insertion_sort_list - sorts using the Insertion sort
 * @list: pointer to double linked list of integers
 *
 * Return: Always 0 (Success)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *ref;
	listint_t *index;

	if (list == NULL || *list == NULL)
	{
		return;
	}
	head = *list;
	ref = head->next;
	while (ref != NULL)
	{
		index = ref->prev;
		while (index != NULL)
		{
			if (ref->n < index->n)
			{
				if (ref->next != NULL)
				{
					ref->next->prev = index;
				}
				if (index->prev != NULL)
				{
					index->prev->next = ref;
				}
				else
				{
					head = ref;
					(*list) = ref;
				}
				ref->prev = index->prev;
				index->next = ref->next;
				ref->next = index;
				index->prev = ref;
				print_list(head);
			}
			index = index->prev;
		}
		ref = ref->next;
	}
}
