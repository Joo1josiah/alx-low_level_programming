#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
				return INT_MAX;
			else 
				return INT_MIN;
		}

		result = result * 10 + digit;
		i++;
	}
	return result * sign;
