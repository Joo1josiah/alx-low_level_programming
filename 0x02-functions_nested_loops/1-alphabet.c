#include "main.h"

/**
 * print alphabet - Prints the lowercase alphabet followed by a new line
 * Description: This function prints all lc letters
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
