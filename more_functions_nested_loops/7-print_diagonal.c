/*
 * File: 7-print_diagonal.c
 * Auth: Heidi Leeman
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
  int vert = 0;
  int horz = 0;
  
  if (n > 0)
  {
    while (horz < vert)
      {
        _putchar(' ');

        horz = horz + 1;
      }
    _putchar('\\');

    vert = vert + 1;
    horz = 0;

    if (vert != n)
    {
      _putchar('\n');
    }
  }
}
_putchar('\n');
}
  }
