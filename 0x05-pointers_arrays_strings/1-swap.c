#include "main.h"

/**
 * swap_int - a function that swaps values
 *@a - takes and interger
 *@b - also takes in an integer
 * Return: void 
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
