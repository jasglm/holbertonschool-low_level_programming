#include <stdio.h>
/**
 * main - entry point for function
 *
 * Description: Print reverse alphabet
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
