/*
 * File: 6-size.c
 * Auth: Heidi
 */

#include <stdio.h>

/**
 * main - Prints the size of various types on the computer it is complied and run on
 *
 * Return: Always 0.
 */
int main (void)
{
      printf("Size of a char: %lu byte(s)\n", sizeof(char));
      printf("Size of an int: %lu byte(s)\n", sizeof(int));
      printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
      printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
      printf("Size of a float: %lu byte(s)\n", sizeof(float));
       
      return (0);
}
