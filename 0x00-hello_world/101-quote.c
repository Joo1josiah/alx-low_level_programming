#include <unistd.h>

/**
 * main - starts the program
 *
 *Return: always 1 (failure)
 */

int main(void) 
{

	/*
	 * printing using write function
	 */


	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
