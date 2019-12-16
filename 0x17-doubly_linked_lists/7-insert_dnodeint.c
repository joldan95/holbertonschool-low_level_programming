#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node on a given position
 * @h: Head of the list
 * @idx: index of the list where the new node should be added. Starts at 0
 * @n: Data to add to the list
 *
 * Return: The address of the new node or NULL if it failed
 * If the index exceeds the limits of the list,
 * does not add a node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);
	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	if (idx == 0)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		new_node->next = (*h);

		if (*h)
		{
			new_node->prev = (*h)->prev;
			(*h)->prev = new_node;
		}
		else
			new_node->prev = NULL;

		*h = new_node;

		return (new_node);
	}
	else
	{
		if (*h != NULL)
			return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));
		else
			return (NULL);
	}
}

/**
 * dlistint_len - Returns the number of nodes of a linked dlistint_t list
 * @h: Head of the list to print
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{

	if (h == NULL)
		return (0);
	else
		return (1 + dlistint_len(h->next));
}
