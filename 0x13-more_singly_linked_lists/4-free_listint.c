#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Head of list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}

}
