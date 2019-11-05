#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node on a given position
 * @head: Head of the list
 * @idx: index of the list where the new node should be added. Starts at 0
 * @n: Data to add to the list
 *
 * Return: The address of the new node or NULL if it failed
 * If the index exceeds the limits of the list,
 * does not add a node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_element;

	if (idx == 0)
	{
		new_element = malloc(sizeof(listint_t));
		if (new_element == NULL)
			return (NULL);

		new_element->n = n;

		new_element->next = (*head);
		*head = new_element;

		return (new_element);
	}
	else
	{
		if (*head != NULL)
			return (insert_nodeint_at_index(&((*head)->next), idx - 1, n));
		else
			return (NULL);
	}
}
