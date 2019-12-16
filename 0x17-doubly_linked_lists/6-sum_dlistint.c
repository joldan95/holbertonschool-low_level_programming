#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t list
 * @head: Head of the list
 *
 * Return: The sum of the data of the list
 * If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_dlistint(head->next));
}
