#include "main.h"

/**
 * _isupper -  func checks for uppercase
 * @c: character to be tested
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
