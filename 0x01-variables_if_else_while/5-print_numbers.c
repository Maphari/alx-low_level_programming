#include <stdio.h>

/**
 * main - print base 10 numbers
 * from 0 - 9
 *
 * Return: Always 0
 */

int main(void)
{
	int baseTenNumbers;

	for (baseTenNumbers = 0; baseTenNumbers < 10; baseTenNumbers++)
	printf("%d", baseTenNumbers);
	putchar('\n');

	return (0);
}
