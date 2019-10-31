#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds an element to the end of the list
 * @head: Address to the head of the list
 * @str: String to add
 *
 * Return: The address of the last element added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element;
	int i = 0;

	if (*head == NULL)
	{
		if (str == NULL)
			return (*head);

		new_element = malloc(sizeof(list_t));
		if (new_element == NULL)
			return (NULL);

		new_element->str = strdup(str);
		if (new_element->str == NULL)
		{
			free(new_element);
			return (NULL);
		}

		while (*(str + i) != '\0')
			i++;
		new_element->len = i;
		new_element->next = NULL;
		*head = new_element;

		return (new_element);
	}

	return (add_node_end(&((*head)->next), str));
}
