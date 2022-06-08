#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase, followed by new line.
 *
 * Return: Always int.
 */

void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
