#include "main.h"

/**
 * _strlen - returns a string length
 * @s: takes in a char arg
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}
