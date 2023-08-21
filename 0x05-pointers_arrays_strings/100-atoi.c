#include "main"
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + (*s - '0');
		s++;
	}

	return result * sign;
}
