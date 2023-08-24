#include "main.h"

/**
 * infinite_add - Adds two numbers and stores the result in a buffer.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result buffer, or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, carry = 0, sum;
	int i, j;

	int len_n1 = 0, len_n2 = 0, carry = 0, sum;
	len_n1++;

	while (n2[len_n2] != '\0')
		len_n2++;

	if (len_n1 > size_r || len_n2 > size_r)
		return  (0);

	r[size_r] = '\0';
	len_n1--;
	len_n2--;

	for (i = size_r - 1; len_n1 >= 0 || len_n2 >= 0; i--)
	{
		sum = carry;
		if (len_n1 >= 0)
			sum += n1[len_n1--] - '0';
		if (len_n2 >= 0)
			sum += n2[len_n2--] - '0';

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
	}

	if (carry > 0)
	{
		if (i >= 0)
			r[i] = carry + '0';
		else
			return (0);
	}

	return (r + i);
}
