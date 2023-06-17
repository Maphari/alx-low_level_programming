#include <stdio.h>

/**
 * main - print base 10 number
 * from 0 - 9
 * using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int baseTenNumbers;
	
	for (baseTenNumbers = 0; baseTenNumbers < 10; baseTenNumbers++)
	putchar(baseTenNumbers + '0');
	putchar('\n');

	return (0);
}
