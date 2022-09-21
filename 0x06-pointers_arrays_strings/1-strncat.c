#include "main.h"
#include <string.h>

/**
 * _strncat - func to append
 * @dest: first parameta
 * @src: second parameta
 * @n: 3rd parameta
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
