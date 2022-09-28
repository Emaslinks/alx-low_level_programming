#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - sqrt using recursion
 * @n: parameter to be sqrt
 * Return: sqrt oof a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: num
 * @i: iterator
 * Return: a num
 *
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	return (-1);
	if (square == n)
	return (i);
	return (_sqrt(n, i + 1));
}
