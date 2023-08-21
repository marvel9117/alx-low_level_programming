#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @s: the string character
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	if (s[0] == '\0')
		return (0);

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
