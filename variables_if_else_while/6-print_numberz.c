/*
 * File: 6-print_numberz.c
 * Auth: Heidi Leeman
 */

#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0; num < 10; num ++)
		putchar((num % 10) + '0');

	putchar ('\n');

	return (0);
}
