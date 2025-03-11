#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x
 * raised to the power of y.
 * @x: the base
 * @y: the exponent 
 * Return: if y is lower than 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y -1) * x);
}
