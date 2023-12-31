#include "main.h"

/**
 * print_formatted_number - Prints a number with proper formatting.
 * @number: The number to be printed.
 */
void print_formatted_number(int number)
{
    if (number < 10)
    {
        _putchar(' ');
        _putchar(' ');
        _putchar(' ');
        _putchar(number + '0');
    }
    else if (number < 100)
    {
        _putchar(' ');
        _putchar(' ');
        _putchar(number / 10 + '0');
        _putchar(number % 10 + '0');
    }
    else
    {
        _putchar(' ');
        _putchar(number / 100 + '0');
        _putchar((number / 10) % 10 + '0');
        _putchar(number % 10 + '0');
    }
}

/**
 * print_times_table - Prints the n times table.
 * @n: The number up to which the times table should be printed.
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j == 0)
                _putchar('0');
            else
                print_formatted_number(result);

            if (j != n)
            {
                _putchar(',');
            }
        }
        _putchar('\n');
    }
}

