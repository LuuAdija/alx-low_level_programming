#include "main.h"
/**
 * _puts - print a string, followed by the new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('n\');
}

