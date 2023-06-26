#include "main.h"

/**
 * main - takes in a pointer as parameter
 * update the pointer value to 98
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;
}
