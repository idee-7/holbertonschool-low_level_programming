#include "main.h"

/**
  * more_numbers - prints numbers 0-14 ten times, followed by a new line.
  * 
  */

void more_numbers(void)
{

  int i, m;
  for (i = 1; i <= 10; i++)
    {
      for (m = 0; m <= 14; m++)
        {
          if (m >= 10)
          _putchar('1');
          _putchar(m % 10 + '0');
          }
          _putchar('\n');
        }
}
