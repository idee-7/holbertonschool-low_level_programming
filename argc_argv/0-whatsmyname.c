#include "main.h"
#include <stdio.h>

/*
 * Write a porgram that prints its name, 
 * followed by a new line.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}

