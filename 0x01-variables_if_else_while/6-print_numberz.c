#include <stdio.h>
/**
 * main - entry point for function
 *
 * Description: Print numbres 0-9 using putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
