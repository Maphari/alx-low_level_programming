#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -prints the last digit of n
 * prints out whether it 
 * is greater than 5, 0, or less than 6
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
	printf("Last digit of %d is %d ", n, lastDigit);
       	if (lastDigit > 5)
	printf("and is greater than 5\n");
	else if (lastDigit == 0)
	printf("and is 0\n");
	else if (lastDigit < 6 && lastDigit != 0)
	printf("and is less than 6 and not 0\n");
	return (0);
}
