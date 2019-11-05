#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listint_t list
 * @head: Head of the list
 *
 * Returns: The sum of the data of the list
 * If the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
