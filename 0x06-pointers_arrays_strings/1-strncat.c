#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src to concatenate
 * Return: A pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}

