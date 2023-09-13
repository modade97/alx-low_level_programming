#include "dog.h"
#include "stdio.h"

/**
 * init_dog - function initializes variable of type (struct dog)
 * @d: pointer to dog
 * @name: function variable
 * @age: function variable
 * @owner: function variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
