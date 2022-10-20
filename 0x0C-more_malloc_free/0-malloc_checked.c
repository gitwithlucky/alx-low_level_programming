#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
2-calloc.c void *pointer;

2-calloc.c pointer = malloc(b);

2-calloc.c if (pointer == NULL)
2-calloc.c 2-calloc.c exit(98);

2-calloc.c return (pointer);
}
