#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in a listint_t list
 * @head: Head of the list
 *
 * Description: Finds a loop in a linked list
 *
 * Return: The node where is the loop or NULL if does not have loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	long int add_a, add_b;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		add_a = (long int)head;
		add_b = (long int)head->next;
		if (add_a - add_b <= 0)
			return (head->next);
		head = head->next;
	}
	return (NULL);
}
