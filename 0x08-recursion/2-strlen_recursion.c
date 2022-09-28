#include "main.h"

/**
 * _strlen_recursion - calcilates the length of a string
 * @s: string s
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
