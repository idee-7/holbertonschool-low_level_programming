/*
 * File: 5-sign.c
 * Auth: Heidi Leeman
 */

#include "main.h"

/**
 * _abs - Writes a function that computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the ineger.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
