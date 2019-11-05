#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number ok elements in a lisint_t list
 * @h: Head of the list
 *
 * Return: Number of nodes of the listint_t
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + listint_len(h->next));
	}
}
