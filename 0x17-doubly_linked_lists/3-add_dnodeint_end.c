#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Reference to the first node
 * @n: Data of the node
 *
 * Return: The address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	if (*head == NULL || (*head)->next == NULL)
	{
		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		new_node->prev = *head;
		new_node->next = NULL;

		if (*head)
			(*head)->next = new_node;
		else
			*head = new_node;

		return (new_node);
	}
	else
	{
		return (add_dnodeint_end(&((*head)->next), n));
	}
}
