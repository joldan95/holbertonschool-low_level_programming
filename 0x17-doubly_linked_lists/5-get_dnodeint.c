#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Head of the list
 * @index: Index of the element to get, starting at 0
 *
 * Return: A pointer to the node
 * Null if the index does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL && index == 0)
		return (head);
	if (head != NULL && index != 0)
		return (get_dnodeint_at_index(head->next, index - 1));

	return (NULL);
}
