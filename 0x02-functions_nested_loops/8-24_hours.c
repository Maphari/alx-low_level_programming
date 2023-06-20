#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int hours;
int seconds;

for (hours = 0; hours <= 23; hours++)
{
for (seconds = 0; seconds <= 59; seconds++)
{
_putchar (hours / 10 + '0');
_putchar (hours % 10 + '0');
_putchar (':');
_putchar (seconds / 10 + '0');
_putchar (seconds % 10 + '0');
_putchar ('\n');
}
}
}
