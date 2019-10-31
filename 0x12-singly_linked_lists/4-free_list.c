#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Head of the list;
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
