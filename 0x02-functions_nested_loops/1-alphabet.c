#include "main.h"

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */

void print_alphabet()
{
        char letters;

        for (letters = 'a'; letters <= 'z'; letters++)
        _putchar(letters);
        _putchar('\n');
}

int main(void) 
{
	print_alphabet();

	return (0);
}
