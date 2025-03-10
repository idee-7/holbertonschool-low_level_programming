#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number
 *
 * Return: if n is lower than 0, return -1 to indicate error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return(1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	return (n * factorial(n - 1));
}
