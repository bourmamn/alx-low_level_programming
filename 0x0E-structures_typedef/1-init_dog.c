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
	struct dog *ptr;

	p = d;
	p->name = name;
	p->age = age;
	p->owner = owner;
}
