#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Head of the list to print
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_dlistint(h->next));
	}
}
