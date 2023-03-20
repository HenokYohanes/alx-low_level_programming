#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

	struct dog dog_t
	{
		char *name;
		float age;
		char *owner;
	};

/**
 * new_dog - creates a new dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	return (d);
}

