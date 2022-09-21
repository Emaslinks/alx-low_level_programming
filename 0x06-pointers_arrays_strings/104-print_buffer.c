#include "main.h"

/**
 * print_buffer - func that prints the content of an
 * inputted number of bytes from a buffer
 * prints 10 bytes per line.
 * Starts with the position of the first byte in hexadecimal (8 chars),
 * starting with '0'
 * Each line shows the hexadecimal content (2 chars) of thr buffer
 * 2 bytes at the time, seperated bt a space.
 * Each line shows the content of the buffer
 * Prints the byte if its printable; if not, prints '.'.
 * Each line ends with a new line '\n'
 * if the inputted byte size is 0 or less, the func only prints a new
 * @b: number of  bytes
 * @size: size  of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}
}
