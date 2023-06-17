#include <stdio.h>

/**
 * main - print alphabet letters in lowercase
 * and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabetsInLowercase;
	char alphabetsInUppercase;

	for (alphabetsInLowercase = 'a'; alphabetsInLowercase <= 'z'; alphabetsInLowercase++)
	putchar(alphabetsInLowercase);
	for (alphabetsInUppercase = 'A'; alphabetsInUppercase <= 'Z'; alphabetsInUppercase++)
	putchar(alphabetsInUppercase);
	putchar('\n');

	return (0);

}
