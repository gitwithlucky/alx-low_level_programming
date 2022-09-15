#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int count = 0;
	while (count != 10)
	{
		for(int i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		count++;
	_putchar('\n');
	}
}
