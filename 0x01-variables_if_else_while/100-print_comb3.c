#include <stdio.h>

/**
 * main - Entry point
 *
 * Instruction: Print all possible combination of two digits
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 49;
	while (i < 58)
	{
		putchar(i);
		putchar(j);
		if ((i == 56) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (j < 57)
		{
			j++;
		}
		else
		{
			i++;
			j = i + 1;
		}
	}
	return (0);
}
