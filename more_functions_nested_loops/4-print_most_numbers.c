#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - print numbers 1356789.
*Return: void.
*/

void print_most_numbers(void)
{
  char c;
  for (c = '0'; c <= '9'; c++)
  {
    if (!(c == '2'|| c == '4'))
      _putchar(c);
  }
  _putchar('\n');
}
  
