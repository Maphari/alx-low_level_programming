#include <stdio.h>

/**
 * main - print alphabet letters in lowercase
 * and uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabetsLettersInLowercase;
	char alphabetsLettersInUppercase;

	for (alphabetsLettersInLowercase = 'a'; alphabetsLettersInLowercase <= 'z'; alphabetsLettersInLowercase++)
	putchar(alphabetsLettersInLowercase);
	for(alphabetsLettersInUppercase = 'A'; alphabetsLettersInUppercase <= 'Z'; alphabetsLettersInUppercase++)
	putchar(alphabetsLettersInUppercase);
	putchar('\n');

	return (0);

}
