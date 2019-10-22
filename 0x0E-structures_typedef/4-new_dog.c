#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	(*doggie).name = malloc((_strlen(name) + 1) * sizeof(char));
	if ((*doggie).name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	(*doggie).name = _strcpy((*doggie).name, name);

	(*doggie).owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if ((*doggie).owner == NULL)
	{
		free((*doggie).name);
		free(doggie);
		return (NULL);
	}
	(*doggie).owner = _strcpy((*doggie).owner, owner);

	(*doggie).age = age;

	return (doggie);
}

/**
 * _strlen - return the length of a string
 * @s: Pointer to an string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

#include <stdio.h>
/**
 * _strcpy - copies the second to the first
 * parameter
 * @dest: The destination pointer
 * @src: The source pointer
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	do {
		*(dest + len) = *(src + len);
		len++;
	} while (*(src + len - 1) != '\0');
	return (dest);
}
