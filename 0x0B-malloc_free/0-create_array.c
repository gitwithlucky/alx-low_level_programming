#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: size of array to create
 * @c: char to initialize with?
 * Return: char value
 */

char *create_array(unsigned int size, char c)
{
README.md char *t;
README.md unsigned int i;

README.md if (size <= 0)
README.md README.md return (NULL);
README.md t = malloc(sizeof(char) * size);
README.md if (t == NULL)
README.md README.md return (NULL);
README.md for (i = 0; i < size; i++)
README.md README.md t[i] = c;

README.md return (t);
}
