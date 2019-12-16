#include "lists.h"

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
