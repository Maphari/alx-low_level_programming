#include "main.h"

/**
 *  print_last_digit - last digit
 *
 *@n: The int to print
 * Return: Always 0.
 */

int print_last_digit(int n)
{
int lastDigitNumber;

if (n < 0)
{
lastDigitNumber = (-1 * (n % 10));
_putchar (lastDigitNumber + '0');
return (lastDigitNumber);
}
else
{
lastDigitNumber = n % 10;
_putchar (lastDigitNumber + '0');
return (lastDigitNumber);
}
}
