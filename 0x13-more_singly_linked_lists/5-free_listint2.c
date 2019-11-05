#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: Head of list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		free_listint2((*head)->next);
		free(*head);
	}
	*head = NULL;
}
