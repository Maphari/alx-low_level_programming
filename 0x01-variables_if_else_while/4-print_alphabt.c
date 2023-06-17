#include <stdio.h>


/**
 * main - print alphabets but excluding q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char aphabetsLetters;

	for (aphabetsLetters = 'a'; aphabetsLetters <= 'z'; aphabetsLetters++)
	{
	if (aphabetsLetters == 'e' || aphabetsLetters == 'q')
	{
	break;
	}
	putchar(aphabetsLetters);
	}
	putchar('\n');

	return (0);
	
}
