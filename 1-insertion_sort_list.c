#include "sort.h"
/**
 * insertion_sort_list - functiom that sorts the doubly linked list of integers
 * using the insertion algorithm
 * @list: pointer to first node of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL;

	if (list == NULL || *list == NULL ||
			(*list)->next == NULL)
		return;
	node = (*list)->next;

	while (node != NULL)
	{
		while (node->prev != NULL && node->prev->n >
			       node->n)
		{
			swap_node(node, node->prev, list);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap_node - function that swaps a node with another
 * @node1: one of the odes to be swapped
 * @node2: the second node to be swapped
 * @list: pointer to first node of the doubly linked list
 */
void swap_node(listint_t *node1, listint_t *node2, listint_t **list)
{
	node2->next = node1->next;
	if (node1->next != NULL)
		node1->next->prev = node2;
	node1->next = node2;
	if (node2->prev)
		node2->prev->next = node1;
	else
	{
		*list = node1;
	}
	node1->prev = node2->prev;
	node2->prev = node1;
}
