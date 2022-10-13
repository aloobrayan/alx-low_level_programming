#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: point to struct dog
 *
 * Description: free memory of struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
			free(d->owner);
			free(d);
	}
}
