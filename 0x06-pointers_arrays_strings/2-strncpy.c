#include "main.h"
#include <string.h>

/**
 * _strncpy - func for copying
 * @dest: parameta1
 * @src: parameta2
 * @n: parameta3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
