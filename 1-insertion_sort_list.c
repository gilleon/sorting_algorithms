#include "sort.h"

/**
 * function that swap a doubly linked list of integers
 * 
 * @first: point to the first element
 * @second: pong point to the second element
 *
 * Return: void
 */
void node_swap(listint_t *first, listint_t *second)
{
	if (first->prev)
		first->prev->next = second;
	if (second->next)
		second->next->prev = first;
	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->next = first;
}

/**
 * function that sorts a doubly linked list of integers
 * ascending order using the Insertion sort algorithm
 *
 * @list: a doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y;

	if (!list || !*list || !(*list)->next)
		return;
	x = (*list)->next;
	while (x)
	{
		y = x;
		x = x->next;
		while (y && y->prev)
		{
			if (y->prev->n > y->n)
			{
				node_swap(y->prev, y);
				if (!y->prev)
					*list = y;
				print_list((const listint_t *) *list);
			}
			else
				y = y->prev;
		}
	}
}
