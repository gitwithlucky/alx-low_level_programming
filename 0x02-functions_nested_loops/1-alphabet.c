#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
void print_alphabet(void)
{
	for(int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
