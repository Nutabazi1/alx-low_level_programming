#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0;str !='\0'; i++)
	{
		_putchar(str[i]);
	}
        _putchar('\n')
}
