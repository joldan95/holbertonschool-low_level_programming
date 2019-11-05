#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Head of the list
 *
 * Return: The head node's data
 * And 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *guard;
	int n_guard;

	if (*head != NULL)
	{
		guard = (*head)->next;
		n_guard = (*head)->n;
		free(*head);
		*head = guard;
		return (n_guard);
	}

	return (0);
}
