#include "main.h"
/**
 * _islower - checks for lowercase character
 * @param c The character to check for lowercase
 * Return: Returns 1 if c is lowercase Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
