#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list;
 * @h: The list_t list.
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
0-print_list.c size_t elements = 0;

0-print_list.c while (h)
0-print_list.c {
0-print_list.c 0-print_list.c elements++;
0-print_list.c 0-print_list.c h = h->next;
0-print_list.c }
0-print_list.c return (elements);
}
