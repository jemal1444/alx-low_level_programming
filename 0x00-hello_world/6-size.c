#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned)sizeof(char));
	printf("Size of int: %lu byte(s)\n", (unsigned)sizeof(int));
	printf("Size of a long int: %lu byte(s\n)", (unsigned) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(float));
	return (0);
}
