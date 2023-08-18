#include "main.h"
/**
 * _putchar - writes a character to the standard output
 * @c: The character to print
 *
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <=9; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
