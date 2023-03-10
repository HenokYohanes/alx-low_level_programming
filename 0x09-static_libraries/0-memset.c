#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting memory address
 * @b: disired value
 * @n: memory area to be changed
 * Return: Returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
