#include "main.h"
/**
 * rev_string - reserve a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	char str[100];
	int i = 0;
	int j = 0;

	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		s[i] = str[j];
		j++;
	}
}
