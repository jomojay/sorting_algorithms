#include "sort.h"

/**
 * insertion_sort_list - sort a dlist using insertion sort
 * @list: the list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (!(list && *list && (*list)->next))
		return;

	a = (*list)->next;

	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swap_node(b->prev, b);
				if (!b->prev)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}

}


/**
 * swap_node - swaps 2 nodes in a dlist
 * @f: first node
 * @s: second node
 *
 * Return: nothing
 */
void swap_node(listint_t *f, listint_t *s)
{
	if (f->prev)
		f->prev->next = s;
	if (s->next)
		s->next->prev = f;
	f->next = s->next;
	s->prev = f->prev;
	f->prev = s;
	s->next = f;
}
