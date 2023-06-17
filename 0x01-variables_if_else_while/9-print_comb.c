#include <stdio.h>

/**
 * main - print alphabets in lowercase
 * and in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int possibleCombination;

	for (possibleCombination = 0; possibleCombination < 10; possibleCombination++)
	{
	putchar(possibleCombination + '0');
	if (possibleCombination < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
