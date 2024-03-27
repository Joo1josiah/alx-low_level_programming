[200~#include "main.h"

/**
 *  * _puts_recursion - Prints a string followed by a new line.
 *   * @s: The string to be printed.
 *   
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') // Base case: If we encounter the null terminator, print a new line and rand return
    {
	    _putchar('\n');
		    return;
    }
	_putchar(*s); // Print the current character
	puts_recursion(s + 1); // Recursively call _puts_recursion with the next character
}

