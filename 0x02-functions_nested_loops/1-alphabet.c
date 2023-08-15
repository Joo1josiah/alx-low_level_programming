#include "main.h"

/**
 * print alphabet - Prints the lowercase alphabet followed by a new line
 * Description: This function prints all the lowercase letters of the
 * English alphabet in sequence, followed by a newline character.
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
