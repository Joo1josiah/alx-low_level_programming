#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the start of the matrix (stored as a 1D array).
 * @size: The size of the square matrix.
 * This function calculates and prints the sum of the two diagonals of a square
 * matrix of integers using the _putchar function.
 */
void print_diagsums(int *a, int size)
{
	int anti_diag_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		anti_diag_sum += a[(i + 1) * size - (i + 1)];
	}

	int main_diag_digits = count_digits(main_diag_sum);
	print_number(main_diag_sum);
	_putchar(',');

	int anti_diag_digits = count_digits(anti_diag_sum);
	print_number(anti_diag_sum);

	_putchar('\n');
}

/**
 * count_digits - Count the number of digits in a number.
 * @num: The number to count digits for.
 * Return: The number of digits in the given number.
 */
int count_digits(int num)
{
	int count = 0;

	if (num == 0)
	{
		return 1;
	}

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return count;
}

/**
 * print_number - Print a number using _putchar.
 * @num: The number to be printed.
 */
void print_number(int num)
{
	if (num == 0)
	{
		_putchar('0');
		return;
	}

	int reversed = 0;
	while (num !=0)
	{
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	while (reversed != 0)
	{
		int digit = reversed % 10;
		_putchar(digit + '0');
		reversed /= 10;
	}
}




