#include <stdio.h>
/**
 * main - prints the size of various types
 * on the computer it is compiled and run on
 * should produce the exact same output as in the example
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
