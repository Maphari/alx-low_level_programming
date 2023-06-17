#include <stdio.h>

/**
 * main - printing alphabets in lowecase
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabetsLetters;

	for (alphabetsLetters = 'a'; alphabetsLetters <= 'z'; alphabetsLetters++)
	putchar(alphabetsLetters);
	putchar('\n');

	return (0);
}
