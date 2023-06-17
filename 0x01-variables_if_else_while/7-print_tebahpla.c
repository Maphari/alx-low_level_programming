#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * and in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int alphabetsLetters;

	for (alphabetsLetters = 'a'; alphabetsLetters <= 'z'; alphabetsLetters--)
	putchar(alphabetsLetters);
	putchar('\n');
	
	return (0);	
}
