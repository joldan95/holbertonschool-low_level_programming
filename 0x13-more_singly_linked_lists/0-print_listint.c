#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the elements of a listint_t listint_s
 * @h: Head of the list
 *
 * Return: Number of nodes of the listint_t
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
}
