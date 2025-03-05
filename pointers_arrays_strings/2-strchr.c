#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @c: the character to locate.
 * @s: the string.
 *
 * Return: a pointer to the first occurrence of the character @c in the string, and returns
 *         NULL if the character isn't found.
 */

char *_strchr(char *s, char c)
{
  while(*s)
    {
      if (*s != c)
        s++;
      else
        return (s);
    }
  if (c == '\0')
    return (s);

  return (NULL);
}
