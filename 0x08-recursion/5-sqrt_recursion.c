#include "main.h"

/**
 * _sqrt_evaluator - evaluator function for _sqrt_recursion
 * @n: number to find square root of
 * @i: potential root to check
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_evaluator(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_evaluator(n, i + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_evaluator(n, 0));
	}
}

