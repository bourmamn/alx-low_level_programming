#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: this is dog struct.
 * @name: this dog name.
 * @age: this is dog age.
 * @owner: this is dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
