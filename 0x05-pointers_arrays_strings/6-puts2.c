#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be processed.
 */
void puts2(char *str)
{
	int i = 0, len =0;

	while (str[len] != '\0')
		len++;

	for (; i <= len; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
