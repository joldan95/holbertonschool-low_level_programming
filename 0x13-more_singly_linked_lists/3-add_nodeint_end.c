#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head of the list
 * @n: Data to asign to the node
 *
 * Return: The addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;

	if ((*head) == NULL)
	{
		new_element = malloc(sizeof(listint_t));
		if (new_element == NULL)
			return (NULL);

		new_element->n = n;
		new_element->next = NULL;

		*head = new_element;

		return (new_element);
	}
	else
	{
		return (add_nodeint_end(&((*head)->next), n));
	}
}
