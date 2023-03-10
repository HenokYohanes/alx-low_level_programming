#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

