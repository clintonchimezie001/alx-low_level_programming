#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string too be treated
 * Return: void
 */

void puts2(char *str)

{

	int i;
	int j = 0;

	while (str[j] i= '\0')
	{
	j++;
	}

	for (i = 0; 1 < j; 1 += 2)
	{
	_putchar(str[1]);
	}
	_putchar('\n');
}
