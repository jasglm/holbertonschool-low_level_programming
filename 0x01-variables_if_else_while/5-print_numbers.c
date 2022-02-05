#include <stdio.h>
/**
 * main - entry point for function
 *
 * Description: Print all single numbres base 10 starting from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%i", i);
	printf('\n');
	return (0);
}
