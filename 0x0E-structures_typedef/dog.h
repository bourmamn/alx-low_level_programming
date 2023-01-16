/**
 * struct dog - defines a dog.
 * @name: this the name of the dog.
 * @age: this is the age of the dog.
 * @owner: this the owner of the dog.
 * Description: the given structure defines a dog with some basic infromations.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
