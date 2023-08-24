#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_codes[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
