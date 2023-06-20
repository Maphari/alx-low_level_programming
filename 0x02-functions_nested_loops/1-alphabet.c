#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

int main(void) 
{
	void print_alphabet()
	{
		for (int letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);
		_putchar('\n');
	}

	return (0);
}
