#include "dog.h"
#include <stdlib.h>

/**
 *  _strlen - a function that returns the length of a string.
 *
 * @s: the string to get the length.
 *
 * Return: the length of string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
}

/**
 * _strcpy - a function that copies the string pointed to by src.
 *
 * @dest: destination of the string.
 * @src: source of the string.
 *
 * Return: no return.
 */
char *_strcpy(char *dest, char *src)
{
	char *pointer = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		*dest = 0;
	}
	return (pointer);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(_strlen(name) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	dog->owner = malloc(_strlen(owner) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	return (dog);
}
