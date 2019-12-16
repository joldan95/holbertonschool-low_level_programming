#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index given
 * @head: Head of the list
 * @index: index of the element. Starts at 0.
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *guard;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		guard = (*head)->next;
		if (guard)
			guard->prev = (*head)->prev;
		free(*head);
		*head = guard;
		return (1);
	}
	else
	{
		return (delete_dnodeint_at_index(&((*head)->next), index - 1));
	}
}
