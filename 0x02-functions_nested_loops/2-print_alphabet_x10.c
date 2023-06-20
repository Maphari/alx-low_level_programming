#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char letters;
int count = 0;

while (count < 10)
{
for (letters = 'a'; letters <= 'z'; letters++)
_putchar(letters);
_putchar('\n');

count++;
}
}
