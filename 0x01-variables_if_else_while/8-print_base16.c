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

	for (basesixteenNum = 0; basesixteenNum < 16; basesixteenNum++)
	putchar(basesixteenNum + '0');
	putchar('\n');

	return (0);
}
