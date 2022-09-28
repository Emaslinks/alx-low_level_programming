#include "main.h"

/**
 * _strlen_recursion - calcilates the length of a string
 * @s: string s
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
