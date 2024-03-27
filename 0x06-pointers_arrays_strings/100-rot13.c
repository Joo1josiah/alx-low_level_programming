#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";

	int i;

	while (*ptr != '\0')
	{
		for (i = 0; alpha_upper[i] != '\0'; i++)
		{
			if (*ptr == alpha_upper[i])
			{
				*ptr = rot13_upper[i];
				break;
			}
			else if (*ptr == alpha_lower[i])
			{
				*ptr = rot13_lower[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
