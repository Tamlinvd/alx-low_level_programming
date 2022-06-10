#include "main.h"

/**
 * _isupper - checking for uppercase character
 *
 * @c: checks for  uppercase A-Z
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
