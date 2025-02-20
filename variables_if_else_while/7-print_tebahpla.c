/*
 * File: 7-print_tebahpla.c
 * Auth: Heidi Leeman
 */

#include <stdio.h>

int main(void)
{
	char letter;

	for(letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
