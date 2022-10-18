#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
0-sum_them_all.c register unsigned int i;
0-sum_them_all.c va_list nl;

0-sum_them_all.c va_start(nl, n);
0-sum_them_all.c for (i = 0; i < n; i++)
0-sum_them_all.c 0-sum_them_all.c printf("%i%s", va_arg(nl, int), (separator && i != n - 1) ? separator : "");
0-sum_them_all.c va_end(nl);
0-sum_them_all.c printf("\n");


}
