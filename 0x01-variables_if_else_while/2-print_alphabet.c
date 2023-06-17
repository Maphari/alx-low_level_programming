#include <stdio.h>

/**
 * main - printing alphabets in lowecase
 *
 * Return : Always 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	putchar(alphabets);
	putchar('\n');

	return (0);
}
