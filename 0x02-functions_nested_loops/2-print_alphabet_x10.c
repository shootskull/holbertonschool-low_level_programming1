#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet (void)
{
	int i;
	char ch;

	i = 0;
	while (i<10)
	{
	ch = 'a';
	while ( ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	i++;
	}
}
