#include <stdio.h>

/**
 * main - prints numbers of base 16
 * startng from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int basesixteenNum;
	int baseTen = 10;

	for (basesixteenNum = 0; basesixteenNum < 16; basesixteenNum++)
	if (basesixteenNum < 10)
	putchar(basesixteenNum + '0');
	else
	putchar(basesixteenNum - baseTen + 'a');
	putchar('\n');

	return (0);
}
