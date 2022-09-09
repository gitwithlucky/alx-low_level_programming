#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
*/
int main(void)
{
	for(int i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar(10);
	return (0);
}
