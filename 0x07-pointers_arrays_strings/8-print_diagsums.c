#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix.
 * @a: Pointer to the start of the matrix (stored as a 1D array).
 * @size: The size of the square matrix.
 * This function calculates and prints the sum of the two diagonals of a square
 * matrix of integers using the _putchar function.
 */
void print_number(int num);

void print_diagsums(int *a, int size)
{
	int main_diag_sum = 0;
	int anti_diag_sum = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
	}
	for (i = 0; i < size; i++)
		anti_diag_sum += a[(i + 1) * size - (i + 1)];

	print_number(main_diag_sum);
	_putchar(',');
	_putchar(' ');
	 print_number(anti_diag_sum);
	 _putchar(' ');
}


void print_number(int num)
{
	int reversed = 0;
	int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (temp !=0)
	{
		temp /= 10;
		reversed = reversed * 10 + (num % 10);
		num /= 10;
	}

	while (reversed != 0)
	{
		_putchar(reversed % 10 + '0');
		reversed /= 10;
	}
}




