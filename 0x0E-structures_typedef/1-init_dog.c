#include "dog.h"

/**
 * init_dog - function to initialize a variable
 * @d: point to struct dog
 * @name: char to set name of the struct dog
 * @age: integer to set age
 * @owner: set name of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
