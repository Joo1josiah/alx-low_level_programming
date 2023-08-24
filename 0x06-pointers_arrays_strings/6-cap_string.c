#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') && capitalize_next)
		{
			*ptr -= ('a' - 'A');
			capitalize_next = 0;
		}
		else if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= '0' && *ptr <= '9'))
		{
			capitalize_next = 0;
		}
		else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}

		ptr++;
	}

	return (str);
}

