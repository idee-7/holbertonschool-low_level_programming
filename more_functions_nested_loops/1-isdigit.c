#include "main.h"

/** 
 * _isdigit - checks for digit.
 * @c: character to check.
 *
 * Return: 1 when c is digit, 0 otherwise.
 */
int _isdigit(int c)

{
	if (c >= 1 && c <= 9)
		return (1);
	else
		return (0);

}
