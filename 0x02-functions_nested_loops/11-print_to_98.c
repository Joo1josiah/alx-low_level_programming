#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (int i = n; i <= 98; i++)
        {
            if (i != n)
            {
                _putchar(',');
                _putchar(' ');
                if (i < 10)
                    _putchar(' ');
            }

            if (i < 10 && i >= 0)
                _putchar(i + '0');
            else if (i >= 10)
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            }
            else if (i < 0)
            {
                _putchar('-');
                if (i > -10)
                    _putchar(-i + '0');
                else
                {
                    _putchar(-i / 10 + '0');
                    _putchar(-i % 10 + '0');
                }
            }
        }
    }
    else
    {
        for (int i = n; i >= 98; i--)
        {
            if (i != n)
            {
                _putchar(',');
                _putchar(' ');
                if (i < 10)
                    _putchar(' ');
            }

            if (i < 10 && i >= 0)
                _putchar(i + '0');
            else if (i >= 10)
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            }
            else if (i < 0)
            {
                _putchar('-');
                if (i > -10)
                    _putchar(-i + '0');
                else
                {
                    _putchar(-i / 10 + '0');
                    _putchar(-i % 10 + '0');
                }
            }
        }
    }
    _putchar('\n');
}

