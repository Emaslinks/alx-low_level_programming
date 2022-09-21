#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of integer
 */
int _strlen(cfar *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

/**
 * cap_string - func that capitalize first character of a word
 * @str: string to be capitalized
 * Return: returns the capitalized string
 */
char *cap_string(char *)
{
	int index = 0;
	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;
		if (str[index -1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
			str[index] -= 32;
	}

	return (str);
}
