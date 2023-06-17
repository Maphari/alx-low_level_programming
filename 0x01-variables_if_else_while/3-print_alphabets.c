#include <stdio.h>

/**
 * main - print alphabet letters in lowercase
 * and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabetsLower;
	char alphabetsUpper;

	for (alphabetsLower = 'a'; alphabetsLower <= 'z'; alphabetsLower++)
	putchar(alphabetsLower);
	for (alphabetsUpper = 'A'; alphabetsUpper <= 'Z'; alphabetsUpper++)
	putchar(alphabetsUpper);
	putchar('\n');

	return (0);

}
