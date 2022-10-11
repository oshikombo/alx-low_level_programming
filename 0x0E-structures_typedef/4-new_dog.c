#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the owner of the new dog
 *
 * Return: pointer to newly created dog, NULL if fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *c_name, *c_owner;
	int name_l = 0, owner_l = 0;

	name_l = _strlen(name);
	owner_l = _strlen(owner);

	c_name = malloc(name_l + 1);
	if (c_name == NULL)
		return (NULL);

	c_owner = malloc(owner_l + 1);
	if (c_owner == NULL)
	{
		free(c_name);
		return (NULL);
	}

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		free(c_name);
		free(c_owner);
		return (NULL);
	}

	_memcpy(c_name, name, name_l + 1);
	_memcpy(c_owner, owner, owner_l + 1);

	new_d->name = c_name;
	new_d->age = age;
	new_d->owner = c_owner;

	return (new_d);
}

/**
 * _strlen - obtains the length of a string
 * @s: char pointer to the first position in string
 *
 * Return: the length of the string as an int
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		++count;
	}
	return (count);
}

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination of copy
 * @src: pointer to source of copy
 * @n: number of bytes of src to be copied onto dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		dest[i] = src[i];
		--n;
	}

	return (dest);
}


