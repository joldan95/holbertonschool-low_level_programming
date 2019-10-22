#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog inserted by parameter
 * @d: Dog to free
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).owner);
	free((*d).name);
	free(d);
}
