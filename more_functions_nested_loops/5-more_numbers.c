#include "main.h"

/**
  * more_numbers - prints numbers 0-14 ten times, followed by a new line.
  * 
  */

void more_numbers(void)
{

  int i, more_numbers;
  for (i = 1; i <= 10; i++)
    {
      for (more_numbers = 0; more_numbers <= 14; more_numbers++)
        {
          if (more_numbers >= 10)
          _putchar('1');
          _putchar(more numbers % 10 + '0');
          }
          _putchar('\n');
        }
}
