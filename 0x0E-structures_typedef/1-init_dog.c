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
/**
 * struct dog - defines a dog.
 * @name: this the name of the dog.
 * @age: this is the age the dog.
 * @owner: this the owner of the dog.
 * Description: the given structure defines a dog with some basic infromation
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
