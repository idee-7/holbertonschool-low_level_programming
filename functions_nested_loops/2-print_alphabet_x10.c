/*
 * File: 2-print_alphabet_x10.c
 * Auth: Heidi Leeman
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
